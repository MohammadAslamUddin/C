#include<stdio.h>

int main()
{
    int i,k,ptr,temp,arr[20];
    printf("Enter total elements:");
    scanf("%d",& ptr);

    printf("Enter %d elements:", ptr);
    for(i=0; i<ptr; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1; i<ptr; i++)
    {
        temp= arr[i];
        for(k=i-1; (temp<arr[k]) &&(k>=0); k--)
        {
            arr[k+1]= arr[k];
        }
        arr[k+1]=temp;
    }
    printf("After sorting:");
    for(i=0; i<ptr; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}


