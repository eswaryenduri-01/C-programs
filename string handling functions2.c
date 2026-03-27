//string handling functions
#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[100],str2[100],str3[100],str4[100];
	printf("enter the string1:");
	fgets(str1,100,stdin);
		printf("enter the string2:");
	fgets(str2,100,stdin);
		printf("enter the string3:");
	fgets(str3,100,stdin);
	//converting string1 into upper case letters
	strupr(str1);
	printf("upper letter case of str1 is:%s\n",str1);
		//converting string2 into lower case letters
	strlwr(str2);
	printf("lower letter case of str2 is:%s\n",str2);
	//string comparision of str1 and str2
	printf("comparision of str1 and str3 is %d\n",strcmp(str1,str3));
	//string concatanation of str1 and str3
	strcat(str1,str3);
	printf("string concatantion of str1 and str3 is:%s\n",str1);
	//copying the string str1 into str4;
	strcpy(str4,str1);
	printf("copied string of str1 into str4 is:%s\n",str4);
	//reversing the str2
	printf("rversing the stringstr2 is:%s\n",strrev(str2));
	//length of string3
	printf("length of str3 is:%d\n",strlen(str3));
	return 0;
}
