#include<stdio.h>
int main(){
    int n,hours,sum=0,count=0;
    scanf("%d",&n);
    while(n>=1){
        scanf("%d",&hours);
        sum+=hours;
        if(hours>2){
            count++;
        }
        n--;
    }
    printf("Total Delay Hours: %d\n", sum);
    printf("Delayed days: %d", count);
    return 0;
}