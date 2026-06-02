#include<stdio.h>
int main(){
    int start, end, i, sum=0,num,r;
    printf("Enter the range:");
    scanf("%d %d",&start,&end);
    for(i=start;i<=end;i++){
        num=i;
        sum=0;
        while(num!=0){
            r=num%10;
            sum=sum+r*r*r;
            num=num/10;
        }
        if(sum==i){
            printf("%d ",i);
        }
    }
    return 0;
}