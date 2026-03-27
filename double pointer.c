//double pointer
#include <stdio.h>
int main ()
{
	int a,*ptr1,**ptr2;
	printf("enter the value of 'a':");
	scanf("%d",&a);
	*ptr1=&a;
	**ptr2=&ptr1;
	printf("value of a:%d",a);
	printf("value of a using ptr1:%d",*ptr1);
	printf("value of a using double pointer:%d",**ptr2);
	printf("address of a using a:%d",&a);
	printf("adress of a using ptr1:%d",ptr1);
	
}
