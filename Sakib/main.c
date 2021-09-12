#include <stdio.h>
int main()
{
    int A[100],i,n,k,temp;

    printf("Enter the number of elements: ");


    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }

    for(k=0; k<n; k++)//Start Sorting!
    {
        for(i=k+1; i<n; i++)
        {
            if(A[k]>A[i])
            {
                temp=A[k];
                A[k]=A[i];
                A[i]=temp;
            }
        }
    }


    printf("In ascending order: ");
    for(i=0; i<n; i++)
    {
        printf("%d  ",A[i]);
    }
    return 0;
}
