#include <stdio.h>
int main() {
    int n,kw,max=0,count=0;
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&kw);
        if(kw>max){
            max=kw;
        }
        if(kw>5){
            count++;
        }
        n--;
    }
    printf("Max usage:%d\n", max);
    printf("Surge Hours:%d", count);
    return 0;
}