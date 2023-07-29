#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int choice,len;
    do
    {
        printf("1. String Length     2.String Reverse\n");
        printf("3. String copy       4.String Concate\n");
        printf("5. String Compare    6.Exit\n");
        printf("Give your choice(1 to 6)\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            case 2:
            case 3:
                printf("Give string\n");
                scanf("%s",str1);
                if(choice==1)
                {
                    len=strlen(str1);
                    printf("Length = %d\n",len);
                    break;
                }
                else if(choice==2)
                {
                    strcpy(str2,str1);
                    strrev(str2);
                    printf("Reverse String = %s\n",str2);
                    break;
                }
                 else
                {
                    strcpy(str2,str1);
                    printf("Copied String = %s\n",str2);
                    break;
                }
            case 4:
            case 5:
                printf("Give first string\n");
                scanf("%s",str1);
                printf("Give second string\n");
                scanf("%s",str2);
                if(choice==4)
                {
                    strcat(str1,str2);
                    printf("Conacated String = %s\n",str1);
                    break;
                }
                else
                {
                    if(strcmp(str1,str2) == 0)
                    {

                        printf("Two  strings are equal\n");
                        break;
                    }
                    else
                    {
                        printf("Two  strings are not equal\n");
                        break;
                    }
                }
        }

    }while(choice!=6);
return 0;
}
