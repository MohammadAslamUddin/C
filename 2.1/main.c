#include <stdio.h>

int main()
{
    float j=0;
    int a[50], i=0, n;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        j = j+(float)1/a[i];
    }
    printf("%.3f",j);
}
