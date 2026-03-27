#include <stdio.h>
#include <string.h>

struct student_address {
	int rno;
	char city[30];
	int pin;
};

int main ()
{
struct student_address sa;

printf("enter your city:");
fgets(sa.city,sizeof(sa.city),stdin);  //fgets syntax fgets(destination_array,size,stdin)
//or write write kakinada as strcpy(sa.city,"kakinada");

printf("%s",sa.city);
 return 0;
	
}
