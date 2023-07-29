#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=0;
    printf("Give last even number\n");
    scanf("%d", &n);
    printf("Even numbers are : \n");
    while(1)
    {
        if(i%2 == 1)    //number odd
        {
            i++;    //increment
            continue;   //skip remaining steps in current iteration
        }
        if(i>n)
            break;  //work over
        printf("%d ",i);   //print even number
        i++;
    }
return 0;
}
