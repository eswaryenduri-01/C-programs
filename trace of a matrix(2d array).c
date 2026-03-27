//trae of a matrix(2-d array)
#include <stdio.h>
int main ()
{
	int a[100][100],i,j,x,y,t=0;
	printf("Enter the required number of rows and columns of matrix:");
	scanf("%d %d",&x,&y);
	printf("enter the matrix elements of A:");
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
			if(a[i][j]==a[i][i])
			{
			t+=a[i][i];	
			}
		}
	}
	printf("trace of the given matrix is:%d",t);
	
return 0;	
	
}
