#include <stdio.h>

int main()
{
    float a, b, result;
    printf ("Enter a number for a: ");
    scanf("%f",&a);
    printf("Enter a number for b: ");
    scanf("%f",&b);
    result=a+b;
    printf("result=%.2f",result);
    return 0;
}
