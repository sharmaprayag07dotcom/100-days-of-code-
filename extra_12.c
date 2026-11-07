#include<stdio.h>
#include<string.h>
struct Student{char name[50];int age;float gpa;};
int main(){struct Student s;printf("Enter name, age, GPA: ");scanf("%s %d %f",s.name,&s.age,&s.gpa);printf("Name: %s, Age: %d, GPA: %.2f\
",s.name,s.age,s.gpa);return 0;}
