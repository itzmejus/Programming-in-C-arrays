#include <stdio.h>
#include <stdlib.h>

void main()
{
    int array[100], i, j,k, limit, prime;
    printf("enter the size\n");
    scanf("%d", &limit);
    printf("Enter the array elements\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    // to find prime

    for (i = 0; i < limit; i++)
    {
        prime = 0;
        for (j = 1; j <= array[i]; j++)
        {
            if (array[i] % j == 0)
            {
                prime++;
            }
        }
        // deletion
        if (prime == 2)
        {
            for (k = i + 1; k < limit; k++)
            {
                array[k] = array[k + 2];
            }
            if(i!=limit-1&&i!=limit-2)
            {
                limit=limit-2;
            }
            else if (i==limit-2)
            {
                limit=limit-1;
            }
        }
    }
       
        for (i = 0; i < limit; i++)
        {
            printf("%d", array[i]);
        }
    
}