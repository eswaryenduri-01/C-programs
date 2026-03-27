//swapping of 2 numbers using pointers
#include <stdio.h>
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main (){
	int a=7,b=8;
	printf("numbers before swapping is :a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("numbers after swapping is :a=%d b=%d",a,b);
	return 0;
}
