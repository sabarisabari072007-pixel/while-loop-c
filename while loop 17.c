#include<stdio.h>
int main(){
    int bal,n,amt,sum=0,diff=0,count=0;
    scanf("%d",&bal);
    scanf("%d",&n);
    while(n>=1){
        scanf("%d",&amt);
        if(sum+amt<bal){
            sum+=amt;
            count++;
        }
        else{
            break;
        }
        diff=bal-sum;
        n--;
    }
    printf("Successful Purchases:%d\n",count);
    printf("Final balance:%d\n",diff);
    return 0;
}