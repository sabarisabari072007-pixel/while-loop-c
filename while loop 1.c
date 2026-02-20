#include<stdio.h>
int main(){
    int n,noise;
    int count=0;
    int violation=0;
    int longest_streak=0;
    scanf("%d",&n);
    while(n>0){
       scanf("%d",&noise);
       if(noise>70){
           count++;
           longest_streak++;
           
           if(longest_streak>violation)
            violation=longest_streak;
       }
       else{
           longest_streak=0;
       }
       n--;
    }
    printf("noise violation:%d\n",count);
    printf("longest violation streak:%d",violation);
}