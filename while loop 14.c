#include<stdio.h>
int main(){
    int atm,n,amt,sum=0,count=0;
    scanf("%d",&atm);
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&amt);
        sum+=amt;
        if(sum<=atm){
            count++;
        }
        if(sum>atm){
            sum-=amt;
            break;
        }
        n--;
    }
    printf("Successful Withdrawls:%d\n",count);
    atm-=sum;
    printf("Remaining Cash:%d\n",atm);
    return 0;
}