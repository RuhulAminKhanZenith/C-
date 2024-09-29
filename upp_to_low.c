#include <stdio.h>

int main()
{
    char A;
    scanf("%c",&A);
    if(A>='a' && A<='z'){
        printf("%c\n",A-32);
    }
    else if(A>='A' && A<='Z'){
        printf("%c\n",A+32);
    }

    return 0;
}
