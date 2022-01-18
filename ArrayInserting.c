#include <string.h>
#include <stdio.h>
void main()
{
    int array[20], i, size, newNum, position;
    printf("enter the array size\n");
    scanf("%d", &size);
    printf("enter the array elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("entered array is\n");
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");

    printf("enter the new Number to insert");
    scanf("%d", &newNum);
    printf("enter the position\n");
    scanf("%d", &position);
    for (i = size - 1; i >= position - 1; i--)
    {
        array[i + 1] = array[i];
    }
    array[position - 1] = newNum;
    size++;
    printf("new array is\n");
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}
