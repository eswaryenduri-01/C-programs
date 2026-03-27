//finding biggest number in the array
#include <stdio.h>
int main ()
{
	int big,i,n,a[100];
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the array values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	big=a[0];
	for(i=1;i<n;i++)
	{
		if(big<a[i])
		{
			big=a[i];
		}
	}
		printf("Biggest element in the given array is %d",big);
	
	return 0;
	
}
