#include<stdio.h>
int main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],pos;
    for(i=0;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            pos=i;
        }
    }
    printf("The biggest number is %d\n",max);
    printf("And index number %d",pos);
}
