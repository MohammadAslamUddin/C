#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,y=0,z=0,n,x=0;
    for(i=0;i<1000;i++)
    {
        if(i%3==0 || i%5==0)
        {
            x=x+i;
        }
    }
    printf("%d",x);
}
