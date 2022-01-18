#include <stdlib.h>
#include <stdlib.h>
void main()
{
    int a[100],limit,i;
    printf("Enter array limit");
    scanf("%d",&limit);
    printf("enter values");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);

    }

printf("array values are");
for(i=0;i<limit;i++)
{
    printf("%d \t",&a[i]);
}
}
