#include <stdio.h>

int main()
{
    float num1, num2, result;
    char op;
    while(1){
        printf("Enter the first number:");
        scanf("%f",&num1);

        printf("Enter the operator:");
        scanf(" %c",&op);

        printf("Enter the second number:");
        scanf("%f",&num2);

        switch(op){
        case'-':
            result= num1 - num2;
            printf("result = %.2f",result);
            break;
        case'+':
            result= num1 + num2;
            printf("result = %.2f",result);
            break;
        case'/':
            result= num1 / num2;
            printf("result = %.2f",result);
            break;
        case'*':
            result= num1 * num2;
            printf("result = %.2f",result);
            break;
        default:
            printf("The operator is not valid");
        }
        printf("\n\n\n\n");
    }
    return 0;
}
