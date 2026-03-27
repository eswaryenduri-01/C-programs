//adding the digits in a number
#include <stdio.h>
int main ()
{
	int a,temp=0,b;
	printf("enter a number");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		temp+=b;
		a=a/10;
	}
		printf("the sum of the number is %d",temp);
		return 0;
	
}
