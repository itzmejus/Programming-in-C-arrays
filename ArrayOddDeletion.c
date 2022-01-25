//program to find odd numbers from the array and delete the next two elements


#include <stdio.h>
void main(){
    int array[100],i,j,limit;
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
            for(j=i+1;j<limit;j++)
            {
                array[j]=array[j+2];
            }
            if(i!=limit-1&&i!=limit-2)
            {
                limit=limit-2;
            }
            else if(i==limit-2)
            {
                limit=limit-1;

            }
        }
    }

    //printing Array
    for(i=0;i<limit;i++)
    {
        printf("%d",array[i]);
    }
}