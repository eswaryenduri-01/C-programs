//sum of digits in a number
#include <stdio.h>
int main ()
{
	int i,n,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	while(n!=0)
	{
		i=n%10;
		sum+=i;
		n=n/10;
	}
	printf("sum of digits in the given number is %d",sum);
	return 0;
}
