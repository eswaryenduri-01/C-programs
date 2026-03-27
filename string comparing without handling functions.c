//string comparing without string handing functions
#include <stdio.h>
int main ()
{
char str1[100],str2[100];
int i,flag=0;
printf("enter a string1:\n");
scanf("%s",str1);
printf("enter a string2:\n");
scanf("%s",str2);
while((str1[i]!='\0') && (str2[i]!='\0'))
{
	if(str1[i]!=str2[i])
	{
		flag=1;
		break;
	}
	i++;
}
if(flag==0)
{
	printf("both strings are same");
}
else{
	printf("both  strings are not same");
}
return 0;
	
}
