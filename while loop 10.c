#include<stdio.h>
int main(){
    int n,hour,temp=0,count=0;
    scanf("%d",&n);
    while(n>=1){
        scanf("%d",&hour);
        if(hour==0){
            count++;
        }
        n--;
    }
    printf("Inactive Weeks:%d\n",count);
    if(count>=3)
        printf("Risk status: High");
    else
        printf("Risk status: Low");
}