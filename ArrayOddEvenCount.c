#include <stdlib.h>
#include <stdio.h>
void main(){
    int numbers[10];
    int odd=0,even=0,i;
    printf("Enter 10 numbers");
    for(i=0;i<10;i++){
        scanf("%d",&numbers[i]);

    }
    for(i=0;i<10;i++)
    {
        if(numbers[i]%2==0)
        even=even+1;
        else
        odd=odd+1;

    }
    printf(" Total odd numbers are%d",odd);
    printf("Total even numbers are%d",even);
}

  