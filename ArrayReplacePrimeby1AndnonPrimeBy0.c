
#include <stdio.h>
void main()
{
    int array[20], i, j, size,prime;
    printf("enter the array size\n");
    scanf("%d", &size);
    printf("enter the elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    //to check prime

    for(i=0;i<size;i++)
    {
         prime=0;
        for(j=1;j<=array[i];j++)
        {
            if(array[i]%j==0)
            {
                prime=prime+1;
            }       
        }
        if(prime==2)
        {
            array[i]=1;
        }
        else 
        {
            array[i]=0;
        }
      printf("%d ",array[i]);

    }
}


/* 

enter the array size
6
enter the elements
7
4
3
9
2
13
1 0 1 0 1 1 
 */