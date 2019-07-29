/*
 * Modern text rendering with Linux
 * https://mrandri19.github.io/2019/07/18/modern-text-rendering-linux-ep1.html
 * 
 * OpenBSD Version
 * freetype2 is include in xenoncara on OpenBSD
 */
#include <stdio.h>
#include <stdlib.h>

#include <ft2build.h>
#include <freetype/freetype.h>
#include FT_FREETYPE_H

int main(void);
int terminalprint(int);

int
main(void)
{
    int error;
    char ch;
    FT_Library ftlib;
    error = FT_Init_FreeType(&ftlib);
    if (error !=0 ) {
	    printf("Failed initialise FreeType\n");
	    exit(EXIT_FAILURE);
    }
    
    printf("Hello Render\n");

    FT_Int major, minor, patch;
    FT_Library_Version(ftlib, &major, &minor, &patch);

    printf("FreeType version is: %d.%d.%d\n", major, minor, patch);

    while ((ch = getchar()) != EOF) {
        if (ch != '\n')
        terminalprint(ch);
    }

    return 0;
}

int
terminalprint(int letter)
{
    int error;
    FT_Library ftlib;
	FT_Face face;

    error = FT_Init_FreeType(&ftlib);
    if (error !=0 ) {
	    printf("Failed initialise FreeType\n");
	    exit(EXIT_FAILURE);
    }
	error = FT_New_Face(ftlib, "./UbuntuMono.ttf", 0, &face);
	if (error != 0) {
			printf("failed to load font face\n");
			exit(EXIT_FAILURE);
	}

	error = FT_Set_Pixel_Sizes(face, 0, 32);
	if ( error != 0 ) {
		printf("failed to set pixel size\n");
		exit(EXIT_FAILURE);
	}

	FT_UInt glyph_index = FT_Get_Char_Index(face, letter);

	FT_Int32 load_flags = FT_LOAD_DEFAULT;

	error = FT_Load_Glyph(face, glyph_index, load_flags);

	if (error != 0) {
		printf("failed to load glyph\n");
		exit(EXIT_FAILURE);
	}

	FT_Int32 render_flags = FT_RENDER_MODE_NORMAL;

	error = FT_Render_Glyph(face->glyph, render_flags);

	if (error != 0) {
		printf("failed to render glyph\n");
		exit(EXIT_FAILURE);
	}

	FT_Bitmap bitmap = face->glyph->bitmap;

	for (size_t i = 0; i < bitmap.rows; i++) {
		for (size_t j = 0; j < bitmap.width; j++) {
			unsigned char pixel_brightness =
				bitmap.buffer[i * bitmap.pitch + j];
			if (pixel_brightness > 169) {
				printf("*");
			} else if (pixel_brightness > 84) {
				printf(".");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
    
    return 0;
}
