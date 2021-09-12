#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,l,temp,max,min,guess,a[50],b[50],mid;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)/*The loop for taking the input values.*/
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n-1; i++)/*Designing in the ascending order*/
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Enter the number you wanna find: ");
    scanf("%d",&guess);

    max=n-1; min=0;
    do{
        mid = (int) ((max+min)/2);
        if(a[mid]==guess){
            printf("\nTarget is Found. It's at %d",mid+1);
            break;
        }
        else if(a[mid]> guess){
            max = mid-1;
        }
        else{
            min = mid+1;
        }
    }while(min<=max);

    if(max<min)
        printf("\n%d is not in the array",guess);
}
