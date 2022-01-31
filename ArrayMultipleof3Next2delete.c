
#include <stdio.h>
void main()
{
    int array[20], i, j, size,odd=0,sum=0;
    printf("enter the array size\n");
    scanf("%d", &size);
    printf("enter the elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    //CHECK multiple of 3
    for(i=0;i<size;i++)
    {
        if(array[i]%3==0)
        {
            //delete next 2 elements
            for(j=i+1;j<size;j++)
            {
                array[j]=array[j+2];
            }
            if(i!=size-1&&i!=size-2)
            {

            size=size-2;
            }
            else if(i==size-2)
            {
                size=size-1;
            }
        }
    printf("%d ",array[i]);
    }




/* 

enter the array size
7
enter the elements
4
6
34
65
9
1
12
4 6 9 
 */}