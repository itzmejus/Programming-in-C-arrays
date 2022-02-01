#include <stdio.h>
void main() 
{
int array[100],i,j,count,size,temp[100],uniq=0;
printf("enter the size\n");
scanf("%d",&size);
printf("Enter the array elements\n");
for(i=0;i<size;i++)
{
    scanf("%d",&array[i]);
}
//sorting array
//count=1;
for(i=0;i<size;i++)
{
    for(j=i+1;j<=size;j++)
    {
        if(array[i]>array[j])
        {
            temp[i]=array[i];
            array[i]=array[j];
            array[j]=temp[i];
        }
    }
}
        //count unique elements
       for(i=0;i<size;i++)
       {
           count=0;
           for(j=i+1;j<size;j++)
           {
               if(array[i]==array[j])
               {
               count=count+1;
               array[j]=-1;
               }
           }
           if(count==0&&array[i]!=-1)
           {
                uniq=uniq+1;
           }
       }
       printf("count of uniq elements is%d ",uniq);


}


/* 

enter the size
5
Enter the array elements
8
3
4
4
3
count of uniq elements is
 */