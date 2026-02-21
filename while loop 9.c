#include<stdio.h>
int main(){
    int n,fuel,trip,sum=0,count=0;
    scanf("%d",&fuel);
    scanf("%d",&n);
    sum=fuel;
    while(n>0){
        scanf("%d",&trip);
        if(sum>=trip){
            sum-=trip;
            count++;
        }else{
            break;
        }
        n--;
    }
    printf("Completed Trips:%d\n",count);
    printf("Remaining Fuel:%d\n",sum);
    
    return 0;
}