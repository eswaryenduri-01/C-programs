//simple calculator
#include <stdio.h>
int main ()
{
	int a,b;
	char op;
	printf("enter the numbers and operator:");
	scanf("%d %c %d",&a,&op,&b);
	switch (op)
	{
		case'+' :
			printf("%d + %d = %d",a,b,a+b);
			break;
			case '-' :
					printf("%d - %d = %d",a,b,a-b);
			break;
			case '*' :
					printf("%d * %d = %d",a,b,a*b);
			break;
			case '/' :
					printf("%d / %d = %d",a,b,a/b);
			break;
			case '%' :
					printf("%d %c %d = %d",a,op,b,a%b);
			break;
			default:printf("enter the valid numbers or operators");
				
	}
	return 0;
}
