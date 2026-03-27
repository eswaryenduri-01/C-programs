//student marks
#include <stdio.h>
int main () {
	int m;
	printf("enter the marks of the student:");
	scanf("%d",&m);
	if(m==35) 
	{
		printf("just pass");
	}
		if((m>39) && (m<=75))
		{
			printf("b grade");
		}
		
		if ((m>74) && (m<91) )
		{
			printf("a grade");
		}
		if(m>=90)
	{
		printf("A+ grade");
	}
	if (m<35)
	{
		printf("fail");
	}
	
	
	return 0;
}
