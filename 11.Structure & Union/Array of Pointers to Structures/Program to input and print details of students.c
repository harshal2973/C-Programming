#include<stdio.h>
#include<conio.h>
#include<conio.h>

struct student
{
        int rollno;
        char name[20];
        char address[30];
        char city[20];
        char sex[20];
        int age;

}*st[20];
void main()
{
    int i,n;
    printf("How many students? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    st[i] = (struct student *) malloc (sizeof(struct student));
    printf("Give roll number : \n");
    scanf("%d",&(st[i]->rollno));
    printf("Give name : \n");
    scanf("%s",&(st[i]->name));
    printf("Give address : \n");
    scanf("%s",&(st[i]->address));
    printf("Give city : \n");
    scanf("%s",&(st[i]->city));
    printf("Sex? : \n"  );
    scanf("%s",&(st[i]->sex));
    printf("Age? : \n");
    scanf("%d",&(st[i]->age));


    }
    printf("Rollno\tName\tAddress\tCity\tSex\tAge\n");
    for(i=0;i<n;i++)
        printf("%d\t%s\t%s\t%s\t%s\t%d",st[i]->rollno,st[i]->name,st[i]->address,st[i]->city,st[i]->sex,st[i]->age);
}
