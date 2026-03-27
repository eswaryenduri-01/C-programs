//factorial of a number
#include <stdio.h>
int main()
{
	int i,n;
    int fact=1;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("%d",fact);
	return 0;
}
