#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, n, z=1;
    int a[20], b[20], c[20];
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("\a%d",&a[i]);
    }
    for(j=0; j<n; j+=2){
        b[j]=a[j];
        printf("\n%d",b[j]);
    }

}
