#include<stdio.h>
int main(){
    int n,days,sum=0,count=0;
    scanf("%d",&n);
    while(n>0){
         scanf("%d",&days);
         sum+=days;
         if(days>4){
            count++;
    }
    n--;
    }
    printf("Total Overtime:%d\n",sum);
    printf("Burnout Days:%d\n",count);
}