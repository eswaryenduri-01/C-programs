//biggest of 2 numbers
#include <stdio.h>
int main ()
{
	int a,b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	if (a>b)
	{
		printf("%d is greater than %d",a,b);
	}
	else 
	{
		printf("%d is greater than %d",b,a);
	}
	return 0;
}
