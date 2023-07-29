#include<stdio.h>
#include<conio.h>
void main()
{
    float x,y;
    printf("Enter x and y co-ordinates of a point\t");
    scanf("%f%f",&x,&y);

    if(x==0 && y==0)   printf("Point Lies on origin\n");
    if(x!=0 && y==0)   printf("Point Lies on x-axis\n");
    if(x==0 && y!=0)   printf("Point Lies on y-axis\n");

    if(x>0 && y>0)   printf("Point in First Quadrant\n");
    if(x>0 && y<0)   printf("Point in Second Quadrant\n");
    if(x<0 && y<0)   printf("Point in Third Quadrant\n");
    if(x<0 && y>0)   printf("Point in Fourth Quadrant\n");

getch();
}

