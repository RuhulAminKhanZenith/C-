//this program will print the alphabet and check whether it is vowel or consonant.
#include<stdio.h>
int main()
{
    char x;
    printf("Enter a letter:");
    scanf("%c",&x);
    {
        if(x=='a' || x=='e'|| x=='i' || x=='o' || x=='u' ||
           x=='A' || x=='E'|| x=='I' || x=='O' || x=='U' )
        printf("the alphabet is vowel");
        else if((x>='a' && x<='z')||(x>='A' && x<='Z'))
        printf("the alphabet is consonant");
         else
           printf("Error!!! this character is not alphabet");
    }
return 0;
}
