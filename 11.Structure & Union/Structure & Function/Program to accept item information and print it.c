#include<stdio.h>
#include<conio.h>
struct item
{
    char name[25];
    int qty;
    float price;
    float cost;
};
float calculate(int q,int p)
{
    return q*p;
}
void print_items(struct item i)
{
    printf("\n%s\t%5d\t%6.1f\t%6.1f\n",i.name,i.qty,i.price,i.cost);
}
void main()
{
    struct item it[20];
    float temp;
    int i,n;
    printf("How many items? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Give name of item: ");
        scanf("%s",it[i].name);
        printf("Give quantity: ");
        scanf("%d",&it[i].qty);
        printf("Give unit price: ");
        scanf("%f",&temp);
        it[i].price=temp;
        it[i].cost=calculate(it[i].qty,it[i].price);
    }
    printf("\nName\tQuantity   Price  Cost\n");
    for(i=0;i<n;i++)
        print_items(it[i]);
}
