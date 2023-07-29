#include<stdio.h>
#include<conio.h>
enum day {t8,t0,t1};
int main()
{
    int months[] ={31,28,31,30,31,30,31,31,30,31,30,31};
    int grp[]={0,0,0};
    int a[12];
    int i,n;
    printf("Give total number of months n (not more than 12)\n");
    scanf("%d",&n); //actual array size in n
    for(i=0;i<n;i++)    //Input data
    {
        printf("Give month number\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(months[a[i]-1] == 28)
            grp[t8]++;
        else if(months[a[i]-1] == 30)
            grp[t0]++;
         else if(months[a[i]-1] == 31)
            grp[t1]++;
    }
    printf("28 day month = %d ",grp[t8]);
    printf("30 day month = %d ",grp[t0]);
    printf("31 day month = %d ",grp[t1]);
return 0;
}
