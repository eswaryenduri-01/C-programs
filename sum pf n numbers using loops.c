//sum of n numbers using loops
#include <stdio.h>
int main() 
{
	int n;
	int sum=0;
	int i;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++) 
	{
		sum+=i;
	}
	printf("sum of the %d numbers is %d",n,sum);
	return 0;
}
