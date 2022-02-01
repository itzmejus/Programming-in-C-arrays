
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

    //to check multiple of 5
    for(i=0;i<size;i++)
    {
        if(array[i]%5==0)
        {
            //delete next 2
            for(j=i+1;j<size;j++)
            {
                array[j]=array[j+2];
            }
            if(i!=size-2&&i!=size-1)
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

}


/* 

enter the array size
6
enter the elements
8
5
7
15
13
20
8 5 13 20
 */