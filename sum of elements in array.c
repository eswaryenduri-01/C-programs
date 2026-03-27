//sum of elements in an array
#include <stdio.h>
int main ()
{
	int sum=0,n,a[100],i;
	printf("enter the size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("sum of elements in the given array is %d",sum);
	return 0;
}
