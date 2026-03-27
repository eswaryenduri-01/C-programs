//finding smallest number in the array
#include <stdio.h>
int main ()
{
	int small,i,n,a[100];
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the array values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
	for(i=1;i<n;i++)
	{
		if(small>a[i])
		{
			small=a[i];
		}
	}
		printf("smallest element in the given array is %d",small);
	
	return 0;
	
}
