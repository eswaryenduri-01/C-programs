//searching an element in array (using if and for)
#include <stdio.h>
int main ()
{
	int a[7],mid,i,pos,st,found=0;
	printf("enter the values of an array:");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to find:");
	scanf("%d",&pos);
	mid=a[3];
	if(pos<=a[3])
	{
		if(pos==a[3])
		{
		st=3;
		found=1;	
		}
		else
		{
			for(i=0;i<3;i++)
			{
				if(pos==a[i])
				{
					st=i;
					found=1;
				}
			}
		}
	}
	else if(pos>a[3])
	{
		for(i=4;i<7;i++)
		{
			if(pos==a[i])
			{
			
			  st=i;
			  found=1;
	     	}
		}
	}
	if(found==1)
	{
		printf("array element found in the index:%d",st);
	}
	else
	{
		printf("array element not found");
	}
	return 0;
}
