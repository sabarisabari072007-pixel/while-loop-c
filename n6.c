#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x;
        if(x==1 || x==2)
            x=0;
        else
            x=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d",x);
            x=1-x;
        }
        printf("\n");
    }
}