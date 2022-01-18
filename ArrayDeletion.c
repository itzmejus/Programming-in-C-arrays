#include <stdio.h>
void main(){
    int array[20],i,size,position;
    printf("enter the array size\n");
    scanf("%d",&size);
    printf("enter the array elements\n");
    for(i-0;i<size;i++){
        scanf("%d",&array[i]);
    }
   
    printf("enter the position to delete\n");
    scanf("%d",&position);
    

    for(i=position-1;i<size-1;i++)
    {
        array[i+1]=array[i];
    }
    size--;
    
    printf("new array is even and numbers are\n");
    for(i=0;i<size;i++)
    {
        printf("%d",array[i]);
    }
    
    
    
}