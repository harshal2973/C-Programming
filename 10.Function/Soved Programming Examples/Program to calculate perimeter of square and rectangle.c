#include<stdio.h>
#include<conio.h>
void peri_square(int l);
void peri_rectangle(int l,int b);
int main()
{
    int choice;
    int l,b;
    for(;;)
    {
        printf("1 Square\n");
        printf("2 Rectangle\n");
        printf("3 Exit\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Give size\n");
            scanf("%d",&l);
            peri_square(l);
        }
        else if(choice==2)
        {
            printf("Give length and breadth\n");
            scanf("%d%d",&l,&b);
            peri_rectangle(l,b);
        }
        else
            break;
    }
return 0;
}

void peri_square(int l)
{
    printf("Length = %d\nPerimeter of Square = %d\n",l,4*l);
}

void peri_rectangle(int l,int b)
{
    printf("Length = %d\nWidth = %d\nPerimeter of Rectangle = %d\n",l,b,2*l+2*b);
}
