//All even number rang 100 to 200 while number are divisible 3 or 5//
#include<stdio.h>
int main()
{
   int i;
   printf("All even number rang 100 to 200 while number are divisible 3 or 5\n");
   printf("This number is: \n");
    for(i=100;i<=200;i++)
    {
        if(i%3==0 || i%5==0)
            printf("%d \n",i);
    }
}
