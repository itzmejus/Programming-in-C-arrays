
#include <stdio.h>
void main(){
    int array[100],i,j,limit,sum;
    printf("enter the array size\n");
    scanf("%d",&limit);
    printf("enter the array elements\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&array[i]);
    }
    //checking whether its multiple of 3

    for(i=0;i<limit;i++)
    sum=0;
    for(j=0;j<=array[i];j++){
        
    if(array[i]%3==0)
    {
        sum=sum+array[i];
    }
    }

    printf("sum of multiples of 3 is\n");
    for(i=0;i<limit;i++)
    printf("%d",sum);
}