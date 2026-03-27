//string handling functions
#include <stdio.h>
#include <string.h>
int main ()
{
 char str1[100],str2[100],str3[100],str4[100];
   printf("enter the first string:");
   fgets(str1,100,stdin);
   printf("enter the second string:");
   fgets(str2,100,stdin);
   strupr(str1);
   printf("changing str1 to uppercase letters:%s\n",str1);
   printf("length of str1 is:%d\n",strlen(str1));
   printf("reversing the str2:%s\n",strrev(str2));
   strlwr(str2);
   printf("changing str2 to lowercase letters:%s\n",str2);
   strcpy(str3,str1);
   printf("copying str1 to str3:%s\n",str3);
   strcat(str1,str2);
   printf("concatanation of str2 to str1 is:%s\n",str1);
   printf("comparing str1 and str2:%d\n",strcmp(str1,str2));
   return 0;
   
}
