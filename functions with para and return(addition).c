//functions with return type and parameters
#include <stdio.h>
int sum(int a,int b)
{
	int c;
	
	c=a+b;
	return c;
}
int main()
{
	int result;
	result=sum(30,90);
	printf("sum of 2 numbers is %d",result);
}
