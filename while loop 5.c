#include<stdio.h>
int main(){
    int n, orders, temp = 0, count = 0;
    scanf("%d", &n);
    while(n > 0){
        scanf("%d", &orders);
        if(orders == 0){
            temp++;
        }
        else if(orders == 1){
            count++;
        }
        n--;
    }
    printf("successful Orders:%d\n",count);
    printf("Cancelled Orders:%d\n",temp);
    if(count >= temp)
        printf("status:safe");
    else
        printf("status:risk");

    return 0;
}