#include <stdio.h>
int main()
{
    int n,k,data[50],loc1,loc2,first,secound;
    printf("Enter the number of element as n : ");
    scanf("%d",&n);
    printf("Enter the %d elements:\n ",n);
    for(k=1;k<=n;k++)
    {
        scanf("%d",&data[k]);
    }
    first=data[1];
    for(k=1;k<=n;k++)
    {
        if(first<=data[k])
        {
            first=data[k];
            loc1=k;
        }
    }
    if(first!=data[1])
        secound=data[1];
    else
        secound=data[2];
    for(k=1;k<=n;k++)
    {
        if(secound<=data[k]&&data[k]!=first)
        {
            secound=data[k];
            loc2=k;
        }
    }
    printf("First Number is %d and its position is %d\n second number is %d and is position is %d",first,loc1,secound,loc2);
    return 0;
}
