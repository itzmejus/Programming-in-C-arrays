#include <stdio.h>
void main()
{
    int array[20], i, size;
    printf("enter the array size\n");
    scanf("%d", &size);
    printf("enter the elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("array elements are\n");
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");

   
    for (i = 0; i < size; i++)
    {
        if(array[i] % 2 != 0)
        {
            array[i+1]=array[i+3];
            array[i+2]=array[i+4];
           

        }

    }
        
    
    printf("new aray is\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d  ",array[i]);
    }
    
}
