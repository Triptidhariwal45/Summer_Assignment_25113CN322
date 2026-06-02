#include<stdio.h>
int main(){
    int i,sum=0, originalnum;
    i=originalnum;
     printf("Enter number to check:");
     scanf("%d",&i);
     while(i!=0){
        sum=sum+i%10*i%10*i%10;
        i=i/10;
     }
     if(sum==originalnum){
        printf("%d is an armstrong number",originalnum);
     }
     else{
        printf("%d is not an armstrong number",originalnum);
     }
     return 0;
}
