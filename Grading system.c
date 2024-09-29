#include<stdio.h>
int main()
{
    int a;
    printf("enter a number=");
    scanf("%d",&a);
    {
        if (a>=80)
            printf("A+");
        else if (a>=70)
            printf("A");
        else if (a>=60)
            printf("B");
        else if (a>=50)
            printf("C");
        else if (a>=40)
            printf("D");
        else if (a<40)
            printf("F");
    }
    getch();
}
