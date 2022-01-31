#include <stdio.h>
void main()
{
    int array[50],size,i,j,temp,count,x;
    //accepting array from the user
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    //to sort the array 
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    //printing sorted array
    printf("Sorted array is\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    //to check the elements are repeating
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=i+1;j<size;j++)
        {
        if(array[i]==array[j])
        {
            count=count+1;
            array[j]=-1;
        }
        }
        //printing unique
    
        if(count==1&&array[i]!=-1)
        {
            printf("%d ",array[i]);
        }
    
    }
    
}



/* 

Enter the size of the array
5
Enter the array elements
7
7
3
1
7
Sorted array is
1 3 7 7 7
1 3
 */