#include <stdio.h>
int main() {
    int a, i;
    scanf("%d", &a);
    int arr[a];
    for(i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 1; i < a; i++) {
        if(arr[i] <= arr[i-1]) {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}