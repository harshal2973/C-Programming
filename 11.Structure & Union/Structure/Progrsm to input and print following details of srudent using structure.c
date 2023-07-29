#include<stdio.h>
#include<conio.h>
void main()
{
    struct student
    {
        int rollno;
        char name[20];
        char address[30];
        char city[20];
        char sex;
        int age;
    };
    struct student s1;
    printf("Give roll number\n");
    scanf("%d",&s1.rollno);
    fflush(stdin);
    printf("Give name\n");
    gets(s1.name);
    printf("Give address\n");
    gets(s1.address);
    printf("Give city\n");
    gets(s1.city);
    printf("Give sex (M/F)\n");
    scanf("%c",&s1.sex);
    printf("Give age\n");
    scanf("%d",&s1.age);
    printf("Roll Number = %d,Name = %s, Address = %s\n",s1.rollno,s1.name,s1.address);
    printf("City = %s, Sex = %c, Age = %d\n",s1.city,s1.sex,s1.age);
}
