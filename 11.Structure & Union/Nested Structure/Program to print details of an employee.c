#include<stdio.h>
#include<conio.h>
struct address
{
    char add1[30];
    char add2[30];
    char area[30];
    char city[30];

};
struct employee
{
    char name[20];
    struct address a;
    int sal;
};

void main()
{
    struct employee e;
    printf("Give name:");
    scanf("%s",e.name);
    printf("Give address line1,line2,area and city name\n");
    gets(e.a.add1);
    gets(e.a.add2);
    gets(e.a.area);
    gets(e.a.city);
    printf("Give Salary\n");
    scanf("\nSalary = %d\n",&e.sal);
    printf("Details of employee:\n");
    printf("Name: %s\n",e.name);
    printf("Address: %s,%s,%s\n",e.a.add1,e.a.add2,e.a.city);
    printf("Salary: %d",e.sal);
}
