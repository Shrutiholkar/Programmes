#include<stdio.h>
#define MAX 5
struct stack
{
int a[MAX];
int top;
}s1;

void init()
{
s1.top=-1;
}

int isempty()
{
if(s1.top==-1)
return 1;
else 
return 0;
}

int isfull()
{
if(s1.top==MAX-1)
return 1;
else
return 0;
}

void push(int num)
{
if(isfull())
printf("stack is full dont push");
else
{
s1.top++;
s1.a[s1.top]=num;
printf("\n push successfully");
}
}

void pop()
{
int val;
if(isempty())
{
printf("stack is empty dont pop");
}
else 
{
val=s1.a[s1.top];
s1.top--;
printf("\n poped value=%d",val);
}
}

void disp()
{
int i;
for(i=s1.top;i>=0;i--)
{
printf("%d\n",s1.a[i]);
}
}

int main()
{
int ch,num;
init();
do
{
printf("\n 1-push \n 2-pop \n 3-disp");
printf("\n enter choice ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter number");
       scanf("%d",&num);
       push(num);
        break;
case 2:pop();
        break;
case 3:disp();
       break;        
default:printf("\n invalid choice");
}

}while(ch<4);

}





