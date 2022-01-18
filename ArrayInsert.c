/* #include <stdio.h>
void main(){
    int i,j,size,array[50],positiion,flag;
    printf("enter number the size\n");
    scanf("%d",&size);   
    printf("enter the elements\n");
    for(i=0;i<size;i++)
    scanf("%d",&array[i]);
   
    for(i=0;i<=size;i++)
    flag=0;
    {
        for(j=i;j<=array[i];j++)
        {
            array[i]%j==0;
            flag=flag+1;
        }
        if(flag==2){
            for(i=positiion-1;i<size-1;i++)
            {
                array[i]=array[i+1];

            }
            size--;
        }
    }

    printf("new array is\n");
    for(i=0;i<size;i++)
    {
        printf("%d",array[i]);

    }
} */

/* 
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int limit,a[100],i,j,k,l,prime;
    printf("enter the array limit");
    scanf("%d",&limit);
    printf("enter the values of array");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<limit;i++)
    {
        prime=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                prime=prime+1;
            }
        }
        if(prime==2)
        {
            for(k=i;k<limit;k++)
            {
                a[k]=a[k+1];
            }limit=limit-1;
            
        }
    }
    printf("new array is");
    for(i=0;i<limit;i++)
    {
        printf("%d ",a[i]);
    }
  return EXIT_SUCCESS;
} */



#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int size,a[100],i,j,k,l,prime;
    printf("enter the array size");
    scanf("%d",&size);
    printf("enter the values of array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++)
    {
        prime=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                prime=prime+1;
            }
        }
        if(prime==2)
        {
            for(k=i;k<size;k++)
            {
                a[k]=a[k+1];
                i--;

            }size--;
        }
    }
    printf("new array is\n");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
}