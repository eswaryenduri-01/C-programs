#include <stdio.h>
struct student {
	int rno;
};

void display(struct student *s1)
{
	s1->rno=72;
	printf("%d\n",s1->rno);
	//we use -> in c when you have a pointer to a structure andyou want to access one of its structures
}

int main ()
{
	struct student s2;
	s2.rno=43;
	display(&s2);
	printf("%d",s2.rno);
	return 0;
}
