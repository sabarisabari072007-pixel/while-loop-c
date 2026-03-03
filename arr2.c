#include<stdio.h>
int main(){
    int a, count = 0;
    scanf("%d", &a);
    int arr[a];
    int x;
    scanf("%d", &x);
    for(int i = 0; i < a; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == x){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}