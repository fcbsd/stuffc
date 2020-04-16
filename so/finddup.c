/* https://stackoverflow.com/questions/60893536/finding-duplicate-value-in-a-row-2d-array 
 */

#include <stdio.h>

int 
main(void)
{
    int array[2][5];
    int i, j, l, k;

    printf("\nPlease enter 10 values\n");
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 2; i++)
        {
        scanf("%i", &array[i][j]);
        printf(" i = %d j = %d \n", i,j);

        for (k = 0; k < 2; k++)
        {
            for (l = 0; l < 5; l++)
            {
                printf("in while i = %d j = %d k = %d l = %d \n", i,j,k,l);
                while (array[0][0] == array[i][j])
                {
                    printf("You entered 2 identical numbers in the first row, try again:\n");
                    scanf("%i", &array[i][j]);
                }
            }
        }

    }
}
    return 0;
}
