#include <stdlib.h>
#include <stdio.h>
void main(){
    int arr1[5],arr2[5],sumArr[5];
    int i;
    printf("enter array 1 elements");
    for(i=0;i<5;i++)
    scanf("%d",&arr1[i]);
     printf("enter array 2 elements");
    for(i=0;i<5;i++)
    scanf("%d",&arr2[i]);
    for(i=0;i<5;i++)
    {
        sumArr[i]=arr1[i]+arr2[i];
        
        printf("position of array is %d\nsum of two array is%d\n",i,sumArr[i]);
    }
    
}

  