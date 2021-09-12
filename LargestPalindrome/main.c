#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i;
    int product, revproduct, reverse, max;
    char a[10];

    for(x = 100; x < 1000; x++){
        for(y = 100; y < 1000; y++){
            product = x * y;

            a[10] = product;
            for(i = 0; i< a[].length; i++)
                printf("%s",a[]);
        }
    }
}
