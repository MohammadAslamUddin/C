#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,UB=9,i,n,j,ITEM;
    int LA[100] = {12,2,3,4,5,6,7,8,9,12};
    printf("Traversing Starts:\n");
    for(k=0; k<=UB; k++)
    {
        printf("LA[%d] = %d\n",k, LA[k]);
    }
    printf("Traversing Ends.\n\n\n");
    printf("Inserting begins:\n");
    printf("Enter the position number in which position you want to insert: ");
    scanf("%d",&n);
    printf("Number to be inserted in position %d: ",n);
    scanf("%d",&ITEM);

    for(i=UB;i>=n;i--)
    {
        LA[i+1]=LA[i];
    }
    LA[n]=ITEM;
    UB=UB+1;
    printf("After insertion:\n");
    for(k=0; k<=UB; k++)
    {
        printf("LA[%d] = %d\n",k, LA[k]);
    }
    printf("Insertion ends.\n\n\n\n");
    printf("Enter the position number in which position you want to delete: ");
    scanf("%d",&n);
    for(j=n; j<=UB; j++)
    {
        LA[j]=LA[j+1];
    }
    UB=UB-1;
    for(k=0; k<=UB; k++)
    {
        printf("LA[%d] = %d\n",k,LA[k]);
    }
    return 0;
}
