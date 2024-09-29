#include<stdio.h>
int main()
{
    int a;
    printf("Enter a week number (1-7): ");
    scanf("%d",&a);
    {
        if(a==1)
            printf("Saturday");
        else if (a==2)
            printf("Sunday");
         else if (a==3)
            printf("Monday");
         else if (a==4)
            printf("Tuesday");
         else if (a==5)
            printf("Wednesday");
         else if (a==6)
            printf("Thursday");
         else if (a==7)
            printf("Friday");
            else
             printf("invalid number *_*");

    }
getch();
}
