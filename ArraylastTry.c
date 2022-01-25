#include <stdio.h>
#include <stdlib.h>
void main()
{
    int size, i, j, k, a[50], prime;
    printf("Enter the size of the array");
    scanf("%d", &size);
    printf("enter the array elements");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        prime = 0;
        for (j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                prime++;
            }
        }
        if (prime == 2)
        {
            for (k = i + 1; k < size; k++)
            {
                a[k] = a[k + 2];
            }

            if (i != size - 2 && i != size - 1)
            {
                size = size - 2;
            }
            else if (i == size - 2)
            {
                size = size - 1;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}