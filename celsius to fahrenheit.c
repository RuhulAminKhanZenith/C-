//Centigrade to Fahrenheit//
#include<stdio.h>
int main()
{
  double C,F ;
  printf("Enter a centigrade temperature :");
  scanf("%lf",&C);

  F = (C * 9/5) + 32  ;
  printf("%.2lfC = %.2lfF",C,F);

    return 0;
}
