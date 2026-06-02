#include<stdio.h>
int main(){
    long long binary;
    int decimal=0, base=1, remainder;
    printf("Enter a binary numbr:");
    scanf("%lld", &binary);
    while(binary>0){
        remainder=binary%10;
        decimal=decimal+remainder*base;
        binary=binary/10;
        base=base*2;
    }
    printf("Decimal representation: %d", decimal);
    return 0;
}