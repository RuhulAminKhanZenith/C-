/*#include<stdio.h>
int main(){
    int N,i,a;
    int evn=0, odd=0, pos=0, neg=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d",&a);

        if(a%2==0){
            evn++;
        }
        else if(a%2!=0){
            odd++;
        }
        if(a>0){
            pos++;
        }
        else if(a<0){
            neg++;
        }

    }
    printf("Even:%d\n",evn);
    printf("Odd:%d\n",odd);
    printf("Positive:%d\n",pos);
    printf("Negative:%d\n",neg);

}*/
#include <stdio.h>
int main()
{
    int i,n,a,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);

        do{
            printf("%d ",a%10);
            a/= 10;
        }
        while(a!=0);
        printf("\n");
    }

    return 0;
}

