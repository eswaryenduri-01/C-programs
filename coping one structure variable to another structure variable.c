//structure copy form one structure variable to another structure variable
#include <stdio.h>
struct student
{
int rno;	
};
int main ()
{
	struct student s1,s2;
	s1.rno=61;
	s2=s1;
	printf("%d",s2.rno);
	return 0;
}
