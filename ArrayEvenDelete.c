#include <stdio.h>
void main()
{
    int array[20], i, j, size;
    printf("enter the array size\n");
    scanf("%d", &size);
    printf("enter the elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("odd numbers in the array is deleted and the balance elements are\n");
    for(i=0;i<size;i++)
    {
        if(array[i]%2!=0)
        {
            for(j=i;j<size-1;j++)
            {
                array[j]=array[j+1];
            }
            size--;
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d",array[i]);
    }
}