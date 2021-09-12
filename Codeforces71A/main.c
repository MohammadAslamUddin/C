#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,j;
    char s[999];

    scanf("%d",&n);

    for(i = 0; i<n; i++){
        scanf("%s",s);
        j = strlen(s);
        if(j < 10){
            printf("%s",s);
            printf("\n");
        }
        else{
            printf("%c",s[0]);
            printf("%d",(j-2));
            printf("%c",s[j-1]);
            printf("\n");
        }
    }
}
