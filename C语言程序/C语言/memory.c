#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student{
	int age;
	char name[20];
}; 

struct Student* creat(void);
void show(struct Student* p);

int main()
{
	struct Student *p;
	p=(struct Student*)creat();
	show(p);
}

struct Student* creat(void)
{
	struct Student *p;
	p=(struct Student*)malloc(sizeof(struct Student));
    p->age=18;
    strcpy((*p).name,"feng");
    return p; 
}

void show(struct Student* p){
	printf("%d %s",p->age,p->name);
}
