#include <stdio.h>
void main()
{
    int array[20], i, j, size,odd=0,even=0;
    printf("enter the array size\n");
    scanf("%d", &size);
    printf("enter the elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    //to find multiple of 3 and replace it with 9
    for(i=0;i<size;i++)
    {
        if(array[i]%3==0)
        {
            array[i]=9;
        }
    printf("%d ",array[i]);
    }
    printf("\n");
    //delete even numbers
    for(i=0;i<size;i++)
    {
        if(array[i]%2==0)
        {
            for(j=i;j<size-1;j++)
            {
                array[j]=array[j+1];
            }
            size=size-1;
        }
        printf("%d ",array[i]);
    }
    



}