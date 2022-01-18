#include <stdio.h>
#include <stdlib.h>
void main(){
    int i,j,k,row1,row2,col1,col2,sum,a[100][100],b[100][100],c[100][100];
    printf("Enter the rows and colms  of the array1\n");

    scanf("%d%d",&row1,&col1 );
    printf("enter the array elements of 1\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        
        {
            scanf("%d",&a[i][j]);
    
    }
    }
    printf("Enter the rows and colms  of the array2\n");
    

    scanf("%d%d",&row2,&col2 );
    printf("enter the values of array 2\n");
    

     for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        
        {
            scanf("%d",&b[i][j]);
    
    }
    }
    for(i=0;i<row1;i++)
    {
        sum=0;
        for(j=0;j<col2;j++)
        {
            for(k=j;k<row1;k++)
            {
                sum=sum+(a[i][k]*b[k][i]);
            }
            c[i][j]=sum;
            for(j=0;j<col2;j++)
            {
                printf("%d ",c[i][j]);
            }
             printf("\n");
             
        }
        
    }

}
