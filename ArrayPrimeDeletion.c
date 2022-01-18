#include <stdio.h>
void main()
{
    int array[50], i, j, k, size, prime;
    printf("enter the size\n");
    scanf("%d", &size);
    printf("enter the elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }


    for(i=0;i<size;i++){
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
            for(k=i;k<size;k++)
            {
                array[k]=array[k+1];
                i--;
            }
            size--;
        }

    }
    printf("new array is\n");
    for(i=0;i<size;i++)
    {
        printf("%d",array[i]);
    }
}