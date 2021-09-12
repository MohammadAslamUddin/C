#include<stdio.h>
#include<ctype.h>
#include<string.h>

struct stack
{
    char a[20];
    int top;
}s;

void push(char c)
{
    if(s.top == 20)
        printf("The stack is full");
    else
    {
        s.top++;
        s.a[s.top] = c;
    }
}

pop()
{
    char x;
    if (s.top == -1)
        printf("The stack is underflow");
    else
    {
        x = s.a[s.top];
        s.top--;
        return x;
    }
}

tops()
{
    if(s.top == -1)
        return '#';
    else
        return (s.a[s.top]);
}

preced(char c)
{
    if(c == '+' || c == '-')
        return 1;
    else if(c == '*' || c == '/')
        return 2;
    else
        return 3;
}

islow(char c,char d)
{
    if (preced(c) <= preced(d))
        return 1;
    else
        return 0;
}

int isoperator(char c)
{
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        return 1;
    else
        return 0;
}

main()
{
    char infix[20],postfix[20],c;
    int len,i,j;
    s.top =-1;
    printf("Enter the infix operation: ");
    gets(infix);

    len = strlen(infix);
    infix[len] = ')';
    infix[++len] = '\0';
    i = j = 0;
    push('(');
    do
    {
        c = infix[i];
        if(isalpha(c))
        {
            postfix[j] = c;
            j++;
        }
        else if (c == '(')
                    push(c);
        else if(isoperator(c))
        {
            while(isoperator(tops()) && islow(c,tops()))
            {
                postfix[j] = pop();
                j++;
            }
            pop();
        }
        i++;
    }
    while(tops() != '#');
    postfix[j] = '\0';
    printf("\nPostfix from is %s",postfix);
    getch();
}
