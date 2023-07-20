//accept n student info and display
#include<stdio.h>
struct stud
{
int rno;
char name[20];
 float per; 

}s1[100];

int main()
{
int i,n;
printf("enter limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter rno name per");
scanf("%d%s%f",&s1[i].rno,s1[i].name,&s1[i].per);
}
for(i=0;i<n;i++)
{
printf("\n roll no=%d",s1[i].rno);
printf("\n name=%s",s1[i].name);
printf("\n per=%f",s1[i].per);
}

}
