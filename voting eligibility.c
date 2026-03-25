//voting elgibility
#include <stdio.h>
int main () {
	int v;
	printf("enter the age of voter:");
	scanf("%d",&v);
	if(v>18)
	{
		printf("person is eligible to vote");
	}
	else
	{
		printf("person is not eligible to vote");
	}
	return 0;
}
