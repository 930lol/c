#include<stdio.h>
struct student
{
	char name[20];
	int age;
	int roll_no;
	float marks;
};
int main()
{
	struct student s1 = {"Nick", 16,50,72.5};
	print(s1.name,s1.age,s1.roll_no,s1.marks);
	return 0;
}
void print(char name[],int age,int roll,float marks)
{
	printf("%s %d %d %f",name,age,roll,marks);
}

