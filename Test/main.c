#include <stdio.h>

int main()
{
    int i,n,a[10],b = 0,c;
    printf("Enter the number of subject: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&a[i]);
        b= b+a[i];
    }
    c = b/n;
    printf("%d",c);
}
