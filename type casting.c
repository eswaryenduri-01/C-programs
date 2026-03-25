//type casting
#include <stdio.h>
int main ()
 {
 	int a=10;
 	int d;
 	float c=12.345;
 	float b;
 	b=a;
 	printf("%.2f\n",b);
 	d=c;
 	printf("%d\n",d);
 	d=(int)c+a;
 	printf("%f",d);
 	
 	return 0;
 }
