#include <stdio.h>

int stack(size);
int top = -1;

void push(int value)
{
    top++;
    stack[top] = value;
}

int pop()
{
    int a;
    a = stack[top];
    tor--;
    return a;
}

int is_operand(char ch)
{
    if(ch>='a' && ch<='z' || ch>= 'A' && ch<= 'B')
        return 1;
    else
        return 0;
}

int main()
{
    char postfix[size],ch;
    int i = 0; op1,op2,m,result;
    printf("Enter a postfix expression: ");
    gets(postfix);

    while(postfix[i]!= '\0')
    {
        ch = postfix[i];
        if(is_operand(ch)==1)
        {
            printf("Enter the value of %c: ",c);
            scanf("%d",&m);
            push(m);
        }
        else{
            op2 = pop();
            op1 = pop();
            switch(ch)
            {
                case '-' : result = 0p1-op2;
                            push(result);
                            break;

                case '*' : result = op1* op2;
                            push(result);
                            break;

                case '+' : result = op1+op2;
                            push(result);
                            break;

                case '/' : result = op1/ op2;
                            push(result);
                            break;
            }
        }
        i++;
    }
    result = pop();
    printf("The result is: %d",result);
    getch();
    return 0;
}

