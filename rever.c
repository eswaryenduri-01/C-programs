//reversing a number
#include <stdio.h>
int main ()
{
	int num,temp=0,n;
	printf("enter the number:");
	scanf("%d",&num);
	
	while (num!=0)
	{
		n=num%10;
		temp=temp*10+n;
		num=num/10;
	}
	printf("the reversed number is %d",temp);
	return 0;
}
