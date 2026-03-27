#include <stdio.h>
int main () {
	int a=3;
	int b=4;
	int temp;
	printf("a=%d b=%d\n",a,b);
	
	temp=a;
	a=b;
	b=temp;
	printf("a=%d b=%d",a,b);
	return 0;
	
}
