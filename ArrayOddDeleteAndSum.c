#include <stdio.h>
void main(){
    int array[100],i,j,limit,sum=0;
    printf("enter the array size\n");
    scanf("%d",&limit);
    printf("enter the array elements\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&array[i]);
    }
    //find odd
    for(i=0;i<limit;i++)
    {
        if(array[i]%2!=0)
        {
            for(j=i;j<limit-1;j++)
            {
                array[j]=array[j+1];
            }
        }
            limit--;
    }
    

    //printing Array
    for(i=0;i<limit;i++)
    {
        printf("%d",array[i]);
    }

//to find sum
printf("sum of array is\n");
for(i=0;i<array[i];i++)
sum=sum+array[i];
{
    printf("%d",sum);
}
}