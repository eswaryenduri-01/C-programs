//palindrome or not 
#include <stdio.h>
int main ()
{
	int temp,n,rev=0;
	int st;
	printf("enter a number to check whether it is a palindrome or not:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
	st=n%10;
	rev=rev*10+st;
	n=n/10;
	}
	if(temp==rev)
	{
		printf("%d is a palindrome",temp);
	}
	else
	{
		printf("%d is not a palindrome",temp);
	}
	return 0;
}
