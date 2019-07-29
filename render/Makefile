# Makefile for render programmes
# Copyright (c) 2019 Fred Crowson <fred@crowsons.com>
# make on Centos 7.6-1810
# This file does not work but calling:
# clang -I/usr/include/freetype2 -I/usr/include/libpng15 -lfreetype -Wall -Werror -v -o render render.c
# directly does...
ARGS = render

CC = /usr/bin/clang
CC_FLAGS = \
 -Wall -pedantic \
 -Werror -g
INCLUDES = \
 -I/usr/include/freetype2 \
 -I/usr/include/libpng15 
LIB = -lfreetype

all:
	${CC} ${INCLUDES} ${LIB} ${CC_FLAGS} -o ${ARGS} ${ARGS}.c

clean:
	rm ${ARGS}
