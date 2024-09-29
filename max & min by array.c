
#include<stdio.h>
int main()
{
    int a=1,i,n,arr[100];

    printf("Enter N : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){

     printf("Enter %d value : ",a++);
     scanf("%d",&arr[i]);
    }

    int max,min;
    int l=0;
    int r=0;
    max=min=arr[0];

    for(i=1;i<n;i++)
  {
    if( max<arr[i] )
    {
      max=arr[i];
      l=i;
    }
    if(min>arr[i])
    {
        min=arr[i];
        r=i;
    }
  }

    if(max%min==0)
    {
      printf("Max is divisible by min\n");
    }
    else{
      printf("Max is not divisible by min\n");
    }
    printf("maximum value is : %d \n",max);
    printf("Minimum value is : %d \n",min);

    printf("maximum value index is : %d \n",l);
    printf("Minimum value index is : %d \n",r);


    return 0;
}
