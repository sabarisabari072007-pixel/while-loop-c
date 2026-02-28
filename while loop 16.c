#include<stdio.h>
int main(){
    int max,n,weight,sum=0,count=0;
    scanf("%d",&max);
    scanf("%d",&n);
    while(n>=1){
        scanf("%d",&weight);
        if(sum+weight<=max){
            sum+=weight;
            count++;
        }
        else{
            sum+=weight;
        }
        n--;
    }
        printf("People Entered:%d\n",count);
        if(sum>max){
            printf("Overload Status:Yes\n");
        }
        else{
            printf("Overload Status:No\n");
        }
}