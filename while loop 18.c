#include<stdio.h>
int main(){
    int capacity,n,hours,count=0,counts=0;
    scanf("%d",&capacity);
    scanf("%d",&n);
    while(n>=1){
        scanf("%d",&hours);
        if(capacity>hours){
            count++;
        }
        if(capacity<hours){
            counts++;
        }
        n--;
    }
    printf("Safe Hours:%d\n",count);
    printf("Failure count:%d\n",counts);
    return 0;
}