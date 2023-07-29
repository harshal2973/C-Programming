#include<stdio.h>
#include<conio.h>
struct employee
{
    char name[20];
    double basic;
    double da;
    double hra;
    double ta;
    double tot;
    double net;
};
void main()
{
    struct employee emp[50];
    int i,n;
    double temp;
    printf("How many employees?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nGive Name:");
        scanf("%s",emp[i].name);
        printf("\nGive Basic:");
        scanf("%lf",&temp);
        emp[i].basic=temp;
        emp[i].da=emp[i].basic*5;
        emp[i].hra=emp[i].basic*0.15;
        emp[i].ta=400;
        emp[i].tot=emp[i].basic+emp[i].da+emp[i].hra+emp[i].ta;
        emp[i].net=emp[i].tot-(emp[i].tot*0.05);
    }
    printf("Name       Basic          Da      Hra     Ta      Total       Net\n");
    for(i=0;i<n;i++)
        printf("%s      %6.1f       %6.1f       %6.1f       %6.1f       %7.1f       %7.1f\n",emp[i].name,emp[i].basic,emp[i].hra,emp[i].ta,emp[i].tot,emp[i].net);
}
