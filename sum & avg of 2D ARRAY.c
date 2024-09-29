#include<stdio.h>
int main()
{
    int i,j,a[10][10],sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    float avg=sum/9.0;
    printf("sum= %d\n",sum);
    printf("average = %f\n",avg);
}

