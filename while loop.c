#include<stdio.h>
int main()
{
    int n,i=1,SumEven,SumOdd;

    printf("enter the input n:\n");
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%2==0)
     {
        SumEven+=i;
     }
        else
    {
        SumOdd+=i;
    }
      i++;
    }
    printf("Sum of even number:%d \n",SumEven);
    printf("Sum of odd number:%d \n",SumOdd);
    return 0;

}
