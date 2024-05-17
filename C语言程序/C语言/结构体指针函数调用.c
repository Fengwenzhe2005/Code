#include<stdio.h>
#include<string.h>

struct Student{
		int age;
		char name[200];
	};

void Init(struct Student * p);
	
int main()
{
    
	struct Student stu;
	Init(&stu);
	printf("%d %s",stu.age,stu.name);
	return 0;
}

void Init(struct Student * p)
{
 	p->age=18; 
 	strcpy((*p).name,"feng");
} 
