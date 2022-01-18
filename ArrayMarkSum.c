#include <stdlib.h>
#include <stdio.h>
void main(){
    int marks[5],sum=0,i;
    float avg;
    printf("enter marks of student");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);

    }
    for(i=0;i<5;i++)
    sum=sum+marks[i];
    //avg=sum/5;
    {
        printf("sum is %d",sum);
        printf("\n");
        printf("average is %f",sum/5);
    }

    
}