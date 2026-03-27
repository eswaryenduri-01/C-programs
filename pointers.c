//pointer 
#include <stdio.h>
int main ()
{
	int *ptr,a;
	printf("enter the value of a:");
	scanf("%d",&a);
	ptr=&a;
	printf("value of a:%d\n",a);
	printf("address of a:%d\n",&a);
	printf("address of 'a' using ptr:%d\n",ptr);
	printf("value stored in a using ptr:%d\n",*ptr);
	printf("address of ptr is:%d",&ptr);
	return 0;
}
