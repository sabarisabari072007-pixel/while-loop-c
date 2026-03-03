#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=1;i<a-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<a;i++){
        if(arr[i]!=i){
            printf("%d",i);
            break;
        }
    }
    return 0;
}