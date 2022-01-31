#include <stdio.h>
void main()
{
    int array[20], i, j, size, odd = 0, even = 0;
    printf("enter the array size\n");
    scanf("%d", &size);
    printf("enter the elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    // to find odd
    for (i = 0; i < size; i++)
    {

        if (array[i] >50 && array[i] % 2 != 0)
        {
            for (j = i; j < size; j++)
            {
                array[j] = array[j + 1];
            }
            size=size-1;
        }
            if (array[i] < 50 && array[i] % 2 == 0)
            {
                for (j = i; j < size; j++)
                {
                    array[j] = array[j + 1];
                }
                size=size-1;
            }
        
        printf("%d ",array[i]);
    }
}



/* 

enter the array size
7
enter the elements
37   
67
48
58
63
92
17
37 58 92 17 
 */