#include <stdio.h>

struct stack
{
    int a[20],top;
}s;


void push(int x)
{
    if (s.top == 20)
        printf("The stack is full");
    else
    {
        s.top++;
        s.a[s.top] = x;
        printf("%d is added to your stack",x);
    }
}

void pop()
{
    if(s.top == -1)
        printf("The stack is underflow.");
    else
    {
        printf("%d is deleted from your stack.",s.a[s.top]);
        s.top--;
    }
}

void show()
{
    int i;
    if(s.top == -1)
        printf("The stack is empty");
    else
    {
        printf("The elements of stack are: ");
        for( i = 0; i <= s.top; i++)
            printf("%d\t",s.a[i]);
        printf("<---top");
    }
}


void main()
{
    int ch,data;

    s.top = -1;

    do{
        printf("Menu:");
        printf("Enter the value of ch: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter the value: ");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                exit(0);
        }
    }while(ch < 4);
    getch();
}


