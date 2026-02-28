#include<stdio.h>
int main(){
    int fuel,n,burn,stage=-1,wasted=0,i=1;
    scanf("%d",&fuel);
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&burn);
        fuel-=burn;
        if(fuel<0){
            stage = i;
            wasted-=fuel;
            break;
    }
    i++;
    }
    if(stage!=-1)
        printf("Emergency Stage:%d\n",stage);
    else
        printf("Emergency Stage: Not Occurred\n");
        
    printf("Fuel Wasted:%d\n",wasted);
    return 0;
}