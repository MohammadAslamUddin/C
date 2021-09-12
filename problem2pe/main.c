#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2,j=0,n,a[50];
    a[0]=1;
    a[1]=2;
    while(1)
    {
        a[i]=a[i-1]+a[i-2];
        if(a[i]>4000000)
            break;
        if(a[i]%2==0)
            {
                j=j+a[i];
            }
    i++;
    }
    printf("%d",j);
}
