#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            printf("Zero Angle.\n");
        if(n>0 && n<90)
            printf("Acute Angle.\n");
        if(n==90)
            printf("Right Angle.\n");
        if(n>90 && n<180)
            printf("Obtuse Angle.\n");
        if(n==180)
            printf("Straight Angle.\n");
        if(n>180 && n<360)
            printf("Reflex Angle.\n");
        if(n==360)
            printf("Full Angle.\n");
        if(n>360){
            n=n-360;
                if(n==0)
                printf("Zero Angle.\n");
                if(n>0 && n<90)
                    printf("Acute Angle.\n");
                if(n==90)
                    printf("Right Angle.\n");
                if(n>90 && n<180)
                    printf("Obtuse Angle.\n");
                if(n==180)
                    printf("Straight Angle.\n");
                if(n>180 && n<360)
                    printf("Reflex Angle.\n");
                if(n==360)
                    printf("Full Angle.\n");
        }
    }
}
