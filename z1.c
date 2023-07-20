#include<stdio.h>
#include<string.h>

struct stud
{
int rno;
char name[20];
float per;
char sclass[20];
}s1[100];

int main()
{
int i,n;
char class[20];
printf("enter limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter rno name per sclass");
scanf("%d%s%f%s",&s1[i].rno,s1[i].name,&s1[i].per,s1[i].sclass);
}

printf("enter class to search");
scanf("%s",class);
for(i=0;i<n;i++)
{
if(strcmp(s1[i].sclass,class)==0)
{
printf("\n roll no=%d",s1[i].rno);
printf("\n name=%s",s1[i].name);
printf("\n per=%f ",s1[i].per);

}
else
printf("record not founnd");
}
}



