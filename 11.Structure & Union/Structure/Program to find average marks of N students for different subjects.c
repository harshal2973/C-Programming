#include<stdio.h>
#include<conio.h>
struct stud_exam
{
    char name[20];
    int m1;
    int m2;
    int m3;
    float avg;
};
void main()
{
    struct stud_exam st[50];
    int i,n;
    printf("How many students?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nGive Name:");
        scanf("%s",st[i].name);
        printf("\nGive marks of subject 1,2 & 3 :");
        scanf("%d%d%d",&st[i].m1,&st[i].m2,&st[i].m3);
        st[i].avg=(st[i].m1+st[i].m2+st[i].m3)/3;
    }
    printf("Name  Subject1  Subject2  Subject3  Average\n");
    for(i=0;i<n;i++)
        printf("%s  %7d  %7d  %7d  %7.2f\n",st[i].name,st[i].m1,st[i].m2,st[i].m3,st[i].avg);
}
