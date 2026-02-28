#include <stdio.h>
int main() {
    int n, i = 0;
    scanf("%d", &n);
    int a[100];
    while(i < n) {
        scanf("%d", &a[i]);
        i++;
    }
    int b = 0, c = 0, d = 0; 
    i = 0;
    while(i < n) {
        if(a[i] == 0) {
            b++;
            c++;

            if(c == 3 && d == 0)
                d = i + 1;
        } else {
            c = 0;
        }
        i++;
    }
    if(d != 0)
        printf("Lock Triggered At Attempt: %d\n", d);
    else
        printf("Lock Triggered At Attempt: Not Locked\n");

    printf("Total Failed Attempts: %d\n", b);
    return 0;
}