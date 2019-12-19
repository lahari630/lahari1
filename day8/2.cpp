/* to print student marks and avg */
#include<stdio.h>
main()
{
	int rno,s1,s2,s3,tot=0;
	char name[20];
	float avg=0;
	printf("\n enter rno");
	scanf("%d",&rno);
	printf("\n enter name");
	scanf("%s",&name);
	printf("\n enter 3 sub marks");
	scanf("%d %d %d",&s1,&s2,&s3);
tot=s1+s2+s3;
avg=(float)tot/3;
printf("\n rno:%d",rno);
printf("\n sname:%s",name);
printf("\n total:%d",tot);
printf("\n avg:%f",avg);
}
