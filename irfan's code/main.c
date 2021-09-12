#include <stdio.h>

int main()
{
    float x,y,z;
    float a, b;
    printf("Enter the value for x and y: ");
    scanf("%f %f", &x, &y);
    printf("Enter the price par square feet: ");
    scanf("%f",&z);
    a = x*y;
    b = a*z;
    printf("\nprice is = %.2f\n",b);
    return 0;
}
