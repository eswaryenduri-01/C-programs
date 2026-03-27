//transpose of a matrix(2-d array)
#include <stdio.h>
int main ()
{
	int a[100][100],t[100][100],i,j,x,y;
	printf("Enter the required number of rows and columns:");
	scanf("%d %d",&x,&y);
	printf("Enter the matrix elements of A:");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}
