#include<stdio.h>
int main(){
    int n,originalnum,digit,sum=0,factorial;
    n==originalnum;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0){
        factorial=1;
        digit=n%10;
        for(int i=1;i<=digit;i++){
            factorial*=i;
        }
        sum+=factorial;
        n/=10;
    }
    if(sum==originalnum){
        printf("The number is a strong number.");
    }
    else{
        printf("The number is not a strong number.");
    }
    return 0;
}