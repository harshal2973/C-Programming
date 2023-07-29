#include<stdio.h>
#include<conio.h>
struct cube
{
    int num;
    int c;
};
void main()
{
    struct cube *ptr;
    int i,n;
    printf("How many numbers? \n");
    scanf("%d",&n);
    ptr=(struct cube *)malloc(n*sizeof(struct cube));
    for(i=0;i<n;i++)
    {
        printf("Give number: ");
        scanf("%d",&(ptr->num));
        ptr->c=ptr->num*ptr->num*ptr->num;
        ptr++;
    }
    ptr=ptr-n;
    printf("Number Cube\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\n",ptr->num,ptr->c);
        ptr++;
    }
}
