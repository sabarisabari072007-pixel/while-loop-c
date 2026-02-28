#include<stdio.h>
int main(){
    int n,level,count=0,con=0,breakdown=-1;
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&level);
        if(level>70){
            count++;
            con++;
            
            if(con==3){
                breakdown = n+1;
                break;
            }
            }else{
                con=0;
            }
            n--;
        }
        if(breakdown!=-1)
            printf("Breakdown At Reading:%d\n",breakdown);
        else
            printf("Breakdown At Reading:Not Occurred\n");
            printf("Unsafe Readings:%d\n",count);
    }
