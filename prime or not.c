//checking the number is prime or not
#include <stdio.h>
int main () {
	int i=0,n;
	int t=1;
	printf("enter  a number:");
	scanf("%d",&n);
	if((n==0) || (n==1))
	{
	t=0;
	printf("it is not a prime number");
    return 0;
	}
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			t=0;
			break;
		}
	}
	if(t==0)
	{
		printf("%d is not a prime number",n);
	}
	else {
		printf("%d is a prime number",n);
	}
return 0;	
}
