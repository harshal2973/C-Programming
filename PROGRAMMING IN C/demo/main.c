#include <stdio.h>
#include <stdlib.h>
void find_floor_ceil();

int main()
{
    find_floor_ceil();
    return 0;
}

void find_floor_ceil()
{
    int n,z,i,temp,flag1=0,flag2=0;
    printf("Enter number of elements of array\n");
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&A[i]);
    }
    printf("Enter value to find its floor & Ceiling: ");
    scanf("%d",&z);

    if(z>=A[0] && z<=A[n-1])
    {
     for(i=0;i<n;i++)
    {
        if(A[i]<z && A[i+1]==z)
        {
            temp=A[i];
            flag1=1;
            break;
        }

        if(A[i]>z && A[i-1]==z)
        {
            temp=A[i];
            flag2=1;
            break;
        }

    }
    if(flag1==1)
    {
        printf("\nFloor = %d",temp);
        printf("\nCeiling = Not Present");
    }
    if(flag2==1)
    {
        printf("\nFloor = Not Present");
        printf("\nCeiling = %d",temp);
    }
    }


    else if(z<A[0])
    {
      printf("\nFloor = Not Present");
      printf("\nCeiling = %d",A[0]);
    }
    else if(z>A[n-1])
    {
      printf("\nFloor = %d",A[n-1]);
      printf("\nCeiling = Not Present");
    }


    /*
    for(i=0;i<n;i++)
        {
            if(A[i]==z)
            {
                count=i;
            }

        }

    if(z<A[0])
    {
      printf("\nFloor = Not Present");
      printf("\nCeiling = %d",A[0]);
    }

    else if(z==A[0])
    {
      printf("\nFloor = Not Present");
      printf("\nCeiling = %d",A[1]);
    }
    else if(z>A[n-1])
    {
      printf("\nFloor = %d",A[n-1]);
      printf("\nCeiling = Not Present");
    }
    else if(z==A[n-1])
    {
      printf("\nFloor = %d",A[n-2]);
      printf("\nCeiling = Not Present");
    }
    else
    {
       printf("\nFloor = %d",A[count-1]);
      printf("\nCeiling = %d",A[count+1]);
    }
    */
}
