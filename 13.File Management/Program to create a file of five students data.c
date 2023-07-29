#include<stdio.h>
struct student
{
    int rollno;
    char name[20],bname[20];
} x[5];
int main()
{
    FILE *fp;
    int i;
    fp=fopen("students.txt","w");
    if(fp == NULL)
    {
        printf("File cannot open");
        exit(0);
    }
    for(i=0;i<5;i++)
    {
        printf("\nEnter record of new student");
        scanf("%d",&x[i].rollno);
        fflush(stdin);
        gets(x[i].name);
        gets(x[i].bname);
        fprintf(fp,"%d%s%s",x[i].rollno,x[i].name,x[i].bname);
    }

    fclose(fp);
return 0;
}


