#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=0;
    int found=0;
    for(i=0;i<n;i++){
        if(arr[i]>0){
            if(found==0||arr[i]<min){
                min=arr[i];
                found=1;
            }
        }
    }
    if(found==0){
        printf("No positive");
    } else {
        printf("%d",min);
    }
    return 0;
}