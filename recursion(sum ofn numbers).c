//recursion (addition of 2 numbers)
#include <stdio.h>
int sum(int n)
{
	int m;

	if(n==0)
	{
		return 0;
	}
	else
	{
		m=n+sum(n-1);
	}
	
	return m;
}
int main()
{
	int num1,result;
	printf("enter the any number:");
	scanf("%d",&num1);
	result=sum(num1);
	printf("the recursion of given number is:%d",result);
}
