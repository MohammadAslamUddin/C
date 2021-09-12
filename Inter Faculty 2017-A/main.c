#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n,m,p;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&m);
        scanf("%d",&p);
        for(j=1; j<=m; j++){
            for(k=1; k<=j; k++){
                printf("%d ",k);
            }
            printf("\n");
        }
        printf("\n");
        for(j=1; j<=p; j++){
            for(k=1; k<=j; k++){
                printf("%d ",p*k);
            }
            printf("\n");
        }
    }
}
