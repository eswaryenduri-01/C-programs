//bubble sorting
#include <stdio.h>

	int main ()
	{
		int i,j,a[100],n;
		int t=0;
		printf("Enter the required number of elements in array:");
		scanf("%d",&n);
		printf("Enter the elements of an array:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				if(a[i]>a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			} 
			} 
		
		printf("The array elements after sorting is:");
			for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		
	return 0;	
	}
	

