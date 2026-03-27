//celsius to fahrenheit conversion
#include <stdio.h>
int main ()
{
	float fah,cel;
	printf("enter any temperature value in celsius:");
	scanf("%f",&cel);
	fah=(cel*9/5)+32;
	printf("%.2f",fah);
	return 0;
}
