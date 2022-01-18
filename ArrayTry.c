#include <stdlib.h>
#include <stdio.h>
void main(){
    char a[100],i;
    printf("enter the array ");
    for(i=0;i<10;i++){
        scanf("%c",&a[i]);
    }
    printf("entered array is");
    for(i=10;i>=0;i--){
        printf("%c ",a[i]);
    }
}