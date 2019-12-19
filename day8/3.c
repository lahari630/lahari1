#include<stdio.h>
main()
{
int a,b;
char ch;
printf("\n enter 2 values:");
scanf("%d %d",&a,&b);
printf("\n enter operator of your choice:");
ch=getche();
//fflush(stdin);
//scanf("%c",&ch);
switch(ch)
{
case '+':printf("\n sum :%d",a+b); break;
case '-':printf("\n differece :%d",a-b);break;
default:printf("\n invalid choice");break;
} 
}
