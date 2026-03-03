#include <stdio.h>
int main() {
    int a, m1 = -1, m2 = -1;
    scanf("%d", &a);
    int arr[a];
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);   // FIXED
        if(arr[i] > m1) {
            m1 = arr[i];
        }
    }
    for(int i = 0; i < a; i++) {
        if(arr[i] > m2 && arr[i] != m1) {
            m2 = arr[i];
        }
    }
    printf("second:%d", m2);
    return 0;
}