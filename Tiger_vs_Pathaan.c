#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        int  N,j;
        int p=0, t=0;
        scanf("%d",&N);

        char S[N];
        scanf("%s", S);

        for( j=0;j<N;j++){
            if( S[j]=='T'){
                t++;
            }
            else if( S[j]=='P'){
                p++;
            }
        }

        if(t>p){
            printf("Tiger\n");
        }
        else if(p>t){
            printf("Pathaan\n");
        }
        else if(t==p){
            printf("Draw\n");
        }
    }

    return 0;
}
