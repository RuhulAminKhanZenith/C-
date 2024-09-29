#include<stdio.h>
int main()
{
  int a,b,c;
  printf("input three numbers:");
  scanf("%d%d%d",&a,&b,&c);
  if((a>b && a>c)||(b>c && b>a)||(c>a && c>b))
  {
    printf("highest number is %d \n");
  }
    if(((b+c)==a)||((a+c)==b)||((a+b)==c))
    {
      printf("%d is equal to sum of other two ");
    }
    else
    {
      printf("%d is not equal to sum of other two");
    }
}
