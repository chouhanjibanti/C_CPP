#include<stdio.h>

struct student
{
    char name[20];
    int age;
    int rollno;
};

void main(){
    struct student s;

    printf("Enter name ,age  and rollno :");
    scanf("%s%d%d", s.name , &s.age , &s.rollno);

    printf("Name = %s, Age=%d ,rollno = %d\n",s.name, s.age,s.rollno);
}
