
#include <stdio.h>
void  main()
{
int i,limit,res=0;
int count=0;

printf("Enter the size of the array\n");
scanf("%d",&limit);

int arr[limit];

printf("Enter values\n");

for(i=0;i<limit;i++){
	scanf("%d",&arr[i]);
    
   if(arr[i]%2==0){
   	count+=1;
   }
}

printf("Number of even numbers in the given array is %d",count);

}   



