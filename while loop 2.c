#include<stdio.h>
int main(){
    int n,initial,daily,sum=0,count=0;
    scanf("%d",&n);
    scanf("%d",&initial);
    while(n>0){
        scanf("%d",&daily);
        initial+=daily;
        if(initial<2000)
            count++;
        n--;
    }
    printf("Final Balance:%d\n",initial);
    printf("Low Balance days:%d",count);
    
}