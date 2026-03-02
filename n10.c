#include<stdio.h>
int main(){
    int i,j,n;
    char start = 'E';
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c",start-i+j);
        }
        printf("\n");
    }
    }
