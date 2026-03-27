//finding avg and total marks of n students using structures
#include <stdio.h>
int main ()
{
	struct student{
		int ppsc,lac,beee;
	};
	struct total {
		int tot;
		float avg;
		struct student s;
	};
	
	int i,n;
	printf("no.of students:");
	scanf("%d",&n);
	struct total t[n];
	
		for(i=0;i<n;i++)
	{
	printf("\nenter student %d details(marks of ppsc,lac,beee):",i+1);

		scanf("%d %d %d",&t[i].s.ppsc,&t[i].s.lac,&t[i].s.beee);
		t[i].tot=t[i].s.ppsc+t[i].s.lac+t[i].s.beee;
		t[i].avg=t[i].tot/3;
	}
	
	for(i=0;i<n;i++)
	{
		printf("\nstudent %d total and avg is:\n",i+1);
		printf("total=%d\n",t[i].tot);
		printf("average=%.2f\n",t[i].avg);
	}
	
	return 0;	
}
