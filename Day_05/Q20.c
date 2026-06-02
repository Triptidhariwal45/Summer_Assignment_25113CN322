#include<stdio.h>
int main(){
    int num, prime, i, j, largest=0;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=2; i<=num;i++){
        if (num%i==0){
            prime=1;
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    prime=0;
                    break;
                }
            }
            if(prime==1 && i>largest){
                largest=i;
            }
        }
    }
    printf("The largest prime factor of %d is: %d",num,largest);
 return 0;
}