//recursion (factorial)
#include <stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	return n*fact(n-1);
}
int main()
{
	int num1,result;
	printf("enter the any number:");
	scanf("%d",&num1);
	result=fact(num1);
	printf("the factorial recursion of given number is:%d",result);
}
