#include <stdio.h>
int main(){
    int n,i,closest;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    closest=arr[0];
    for(i=1;i<n;i++){
        int a=arr[i]<0?-arr[i]:arr[i];
        int b=closest<0?-closest:closest;
        if(a<b||(a==b&&arr[i]>closest))
            closest=arr[i];
    }
    printf("%d",closest);
    return 0;
}