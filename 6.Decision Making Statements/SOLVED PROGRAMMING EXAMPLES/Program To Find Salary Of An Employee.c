/*Program to calculate total salary and net salary of an employee
net salary = total salary - income tax
total salary = basic + da + hra + ta
da = 50% of basic.
Below mentioned table shows how da, hra and ta can be calculated from basic
Basic                   hra     ta
upto 6000               500     200
from 6001 to 10000      1500    400
from 10001 to 20000     2500    800
20001 & above           3500    1600

Income tax rate:
Total Salary            Income tax rate(%)
upto 10000              0
from 10001 to 20000     10%
20001 & above           20%
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float basic, net, tot, hra, ta, da, itax;
    /*
    variables   represents
    basic       Basic Salary
    net         Net Salary
    tot         Total Salary
    ta          Transport Allowance
    hra         House Rent Allowance
    da          Dearness Allowance
    itax        Income Tax
    */
    printf("Enter Basic Salary Of An Employee\n");
    scanf("%f", &basic);
    da=basic*0.5;   //da calculation
    if (basic <= 6000)
    {
        hra=500;
        ta=200;
    }
    else if (basic >= 6001 && basic<=10000)
    {
        hra=1500;
        ta=400;
    }
    else if (basic >= 10001 && basic<=20000)
    {
        hra=2500;
        ta=800;
    }
    else if(basic >= 20001)
    {
        hra=3500;
        ta=1600;
    }
    tot= basic + da + hra + ta;   //total salary calculated
    if (tot<=10000)
        itax=0;
    else if(tot >= 10001 && tot<= 20000)
        itax=tot*0.1;
    else
        itax=tot*0.2;
    net=tot-itax;   //Net Salary

    printf("=====================================\n");
    printf("BASIC              =     %8.2f\n",basic);
    printf("HRA                =     %8.2f\n",hra);
    printf("TA                 =     %8.2f\n",ta);
    printf("DA                 =     %8.2f\n",da);
    printf("=====================================\n");
    printf("TOTAL SALARY       =     %8.2f\n",tot);
    printf("INCOME TAX         =     %8.2f\n",itax);
    printf("=====================================\n");
    printf("NET SALARY         =     %8.2f\n",net);
return 0;
}
