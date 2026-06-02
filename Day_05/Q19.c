#include<stdio.h>
int main(){
    int i, num;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        if(num%i==0){
            printf("The factor of %d is: %d ",num,i);
        }
    }
    return 0;
}