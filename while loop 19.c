#include<stdio.h>
int main(){
    int max,n,patient,sum=0,diff=0;
    scanf("%d",&max);
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&patient);
        if(sum<max){
            if(sum+patient<=max){
                sum=sum+patient;
            }
            else{
                diff=diff+(sum+patient-max);
                sum=max;
            }
        }
        else{
            diff=diff+patient;
        }
        n--;
    }
    printf("Treated patients:%d\n",sum);
    printf("Rejected patients:%d\n",diff);
    return 0;
}