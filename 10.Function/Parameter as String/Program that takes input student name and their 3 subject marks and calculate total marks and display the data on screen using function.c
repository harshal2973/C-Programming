#include<stdio.h>
#include<conio.h>
#include<string.h>
void disp(char stud[10][20],int mark[10][3],int n);

void starline();

int main()
{
    char names[10][20];
    int marks[10][3];
    int i,j,n;
    printf("How many students?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name of student\n");
        scanf("%s",names[i]);
        printf("Enter 3 subjects marks (not more than 100) in sequence\n");
        for(j=0;j<3;j++)
            scanf("%d",&marks[i][j]);
    }
    starline();
    disp(names,marks,n);
return 0;
}

void starline()
{
    int i;
    for(i=0;i<50;i++)
        putchar('*');
    printf("\n");
}

void disp(char stud[10][20],int marks[10][3],int n)
{
    int i,j,tot;
    for(i=0;i<n;i++)
    {
        tot=0;
        puts(stud[i]);
        for(j=0;j<3;j++)
        {
            printf("%d ",marks[i][j]);
            tot=tot+marks[i][j];
        }
        printf("Total= %d\n",tot);
        starline();
    }
}
