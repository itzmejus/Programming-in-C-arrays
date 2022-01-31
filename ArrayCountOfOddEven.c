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

    //to find odd
    for(i=0;i<size;i++)
    {
        {
            if(array[i]%2!=0)
            {
                odd=odd+1;
            }
            else{
                even=even+1;
            }
        }
    }
        printf("count of odd is %d",odd);
        printf("\n");
        printf("count of even is %d",even);

}


/* 

enter the array size
6
enter the elements
4
6
8
3
5
7
count of odd is 3
count of even is 3
 */