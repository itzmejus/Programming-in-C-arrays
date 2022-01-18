#include <stdlib.h>
#include <stdio.h>
void main(){
    char str[20],i;
    printf("enter the string");
    for(i=0;i<20;i++)
    scanf("%c",&str[i]);

    printf("\nenterd string is");
    for(i=20;i>=0;i--)
    {
        printf("%c",str[i]);

    } 
}