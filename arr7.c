#include <stdio.h>
int main() {
    int n,count=0,counts=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);   
        if(arr[i] % 2 == 0){
            count++;
        }
        else{
            counts++;
        }
    }
    printf("Even: %d\n", count);
    printf("Odd: %d\n", counts);
    return 0;
}