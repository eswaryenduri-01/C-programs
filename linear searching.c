//linear searching
#include <stdio.h>
int main ()
{
	int a[8]={10,20,30,40,78,23,67,67};
	int n,i,index,found=0;
	printf("enter the element for searching:");
	scanf("%d",&n);
	for(i=0;i<8;i++)
	{
		if(a[i]==n)
		{
		index=i;
		found=1;
		break;	
		}
	}
	if(found==1)
	{
		printf("element found at index:%d",index);
	}
	else{
		printf("element does not found");
	}
	return 0;
	
}
