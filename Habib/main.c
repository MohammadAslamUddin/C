#include <stdio.h>
int main()
{
    int k,n;
    char A[100][100];
    printf("How many input will you take: ");
    scanf("%d",&n);//how many input will you take
    printf("Input %d elements: \n",n);
    for(k=1; k<=n; k++)
    {
        scanf("%s",A[k]);//Inserting
    }
    printf("The elements are: \n");
    for(k=1; k<=n; k++)
    {
        printf("A[%d] = %s\n",k,A[k]);//Inserting
    }
}
