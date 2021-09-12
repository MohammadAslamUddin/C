#include<stdio.h>

int main()
{
    int n, i,o,m,count,a=0,b=0,c=0;
    scanf("%d %d",&m,&n);
    for(o=m; o<=n; o++)
    {
        count=1;
        for(i=o;;count++)
        {
            if(i==1)
                break;
            if(i&1)
                i = 3*i+1;
            else
                i = i/2;
        }
        printf("%d\n",count);
    }

    return 0;
}
