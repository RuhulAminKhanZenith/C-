
#include<stdio.h>
int main()
{
  int n,i,a[100],b[100];
  printf("Enter the number of element: ");
  scanf("%d",&n);
  printf("Enter %d element: ",n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++)
  {
      b[i]=a[i];
  }

  printf("\nGiven array: ");
   for(i=0;i<n;i++)
  {
      printf("%d ",a[i]);
  }
  printf("\nCopy array: ");
   for(i=0;i<n;i++)
  {
      printf("%d ",b[i]);
  }

   return 0;
}
