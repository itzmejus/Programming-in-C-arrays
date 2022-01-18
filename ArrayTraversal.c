#include <string.h>
#include <stdio.h>
void main()
{
    int array[10], size, i,Newnum,position;
    printf("enter the array limit");
    scanf("%d", &size);
    printf("enter array elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Array elements are\n");
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");
/* 
    printf("enter the number to insert\n");
    scanf("%d",&Newnum);
    printf("enter the position \n ");
    scanf("%d",&position);
    for(i=size-1;i>=position-1;i--)
    {
        array[i+1]=array[i];
    }
    array[position-1]=Newnum;
    size++;
    printf("new array is\n");
    for(i=0;i<size;i++)
    {
        printf("%d",array[i]);
    } */
}