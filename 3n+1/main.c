#include <stdio.h>

int uva100(int n)
{
    if(n==1)
        return 1;
    else if(n&1)
        return uva100(3*n+1) + 1;
    else
        return uva100(n/2) + 1;
}

int maxcycle(int a,int b)
{
    if(a>b)
        return maxcycle(b,a);
    int mx=0, count;
    while(a<=b)
    {
        count = uva100(a);
        if(mx<count)
            mx = count;
        a++;
    }
    return mx;
}

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        printf("%d %d %d\n",a,b,maxcycle(a,b));
    }
    return 0;
}
