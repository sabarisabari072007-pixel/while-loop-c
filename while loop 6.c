#include<stdio.h>
int main(){
    int max,n,pw,sum=0,count=0;
    scanf("%d",&max);
    scanf("%d",&n);
    while(n>=1){
        scanf("%d",&pw);
        sum+=pw;
        if(sum<=max){
            count++;
        }
        n--;
    }
    if(sum<max)
        printf("Overload:No\n");
    else
        printf("Overload:Yes\n");
        
    printf("Passengers Allowed:%d\n",count);
    return 0;
}