//greatest
#include <stdio.h>
int main ()
{
	int a,b,c;
	printf("ente the value of a:");
	scanf("%d",&a);
		printf("ente the value of b:");
	scanf("%d",&b);
		printf("ente the value of c:");
	scanf("%d",&c);
	
	printf("%d\n",(a<b&&b>c));
		printf("%d\n",(a<b||b>c));
		printf("%d\n",!(a<b&&b>c));
		return 0;
	
}
	

