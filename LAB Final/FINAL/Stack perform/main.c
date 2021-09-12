
#include<stdio.h>
struct stack
{
int a[20];
int top;

}s;
void push(int x)
{
if(s.top==20)
printf("Stack full");
else
{
s.top++;
s.a[s.top]=x;
printf("\n\tData is added to stack\n");

}
}
void pop()
{
int x;
if(s.top==-1)
{
printf("\n\tStack empty");
}
else
{
printf("\n\tThe deleted data is %d",s.a[s.top]);
s.top--;

}
}

void show()
{
int i;
if(s.top==-1)
{
printf("\nStack Empty");
}
else
{
printf("\nThe stack elements");
printf("\n-------------------\n\t");
for(i=0;i<=s.top;i++)
printf("%d\t",s.a[i]);
printf("<---top\n");

}
}

void main()
{
int ch,data;
s.top=-1;
do
{
printf("\n\t\t\t Menu");
printf("\n\t\t1->Push");
printf("\n\t\t2->Pop");
printf("\n\t\t3->List stack");
printf("\n\t\t4->Exit");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Enter the data:");
scanf("%d",&data);
push(data);
break;
case 2: pop();
break;
case 3: show();
break;
case 4: exit(0);
}
}while(ch<4);
getch();
}


