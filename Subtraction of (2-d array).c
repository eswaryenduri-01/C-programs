//subtraction of 2-d array
#include <stdio.h>
int main ()
{
	int x,y,i,j,a[100][100],b[100][100],c[100][100];
	printf("Enter the required number of rows and columns of matrix:");
	scanf("%d %d",&x,&y);
	printf("Enter the elements of matrix A:");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of matrix B:");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
		for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("Subtraction  of two numbers is:");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
		printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
