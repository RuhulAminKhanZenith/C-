#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,d;
  printf("Enter a number: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      d=pow(i,3);
      printf("%d ",d);
  }
   return 0;
}
