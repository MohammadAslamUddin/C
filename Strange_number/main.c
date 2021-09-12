#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,j,k,m;
    float l=0;
    while(scanf("%d",&n)==1)
    {
        i=0;
        k=0;
        l=0;
        for(i=n,n=0; i!=0; i=i/10)
        {
            j=i%10;
            k=(k*10)+j;

        }
        l=(float)(sqrt(k));
        m = (int)l;
        if(l==m)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
