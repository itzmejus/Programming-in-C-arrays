//program to sort elements in an array 

#include <stdio.h>
void main()
{
    int array[100], i, j, limit, temp, prime;
    printf("enter the array size\n");
    scanf("%d", &limit);
    printf("enter the array elements\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < limit - 1; i++)
    {
        for (j = i + 1; j < limit; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("sorted array is\n");
    for (i = 0; i < limit; i++)
    {
        printf("%d ", array[i]);
    }

    // to find prime

    

        for (i = 0; i < limit; i++)
            prime = 0;
        for (j = 1; j <= array[i]; j++)
        {
            if (array[i] % j == 0)
            {
                prime = prime + 1;
            }
            if (prime == 2)
            {
                for (j = i + 1; j < limit; j++)
                {
                    array[j] = array[j + 2];
                }
            }
            if (i != limit - 1 && i != limit - 2)
            {

                limit = limit - 2;
            }
            else if (i == limit - 2)
            {
                limit = limit - 1;
            }
            
        }
       

        for (i = 0; i < limit; i++)
            {
                printf("%d ", array[i]);
            }
        
    
}
