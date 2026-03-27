//student structure

#include <stdio.h>

struct student
{
	char name[30];
	int rno;
	float ppsc,dld,lac;
	int tot;
	float avg;
};

int main ()
{
	int i,j;
	int n;
	printf("enter number of students:");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("enter %d student details:",i+1);
	    scanf("%s",s[i].name);
		scanf("%d%f%f%f",&s[i].rno,&s[i].ppsc,&s[i].dld,&s[i].lac);
		s[i].tot=s[i].ppsc+s[i].dld+s[i].lac;
		s[i].avg=s[i].tot/3;
	}
	
	for(i=0;i<n;i++)
	{
		printf("student %d details are:",i+1);
		printf("name:%s;",s[i].name);
		printf("roll no is:%d;",s[i].rno);
		printf("ppsc marks is:%.1f;",s[i].ppsc);
		printf("dld marks is:%.1f;",s[i].dld);
		printf("lac marks is:%.1f\n",s[i].lac);
		printf("total marks are:%d\n",s[i].tot);
		printf("avg marks are:%.2f\n",s[i].avg);
		
		
	}
	return 0;
}
