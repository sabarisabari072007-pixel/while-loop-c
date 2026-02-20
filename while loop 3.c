#include<stdio.h>
 int main(){
     int td,n,dd,sum=0,diff=0,count=0;
     scanf("%d",&n);
     scanf("%d",&td);
     while(n>0){
        scanf("%d",&dd);
        sum+=dd;
        diff=td-sum;
        if(td>=sum)
            count++;
            if(sum>td)
                break;
        n--;
     }
     printf("Days used:%d\n",count);
     if(sum>td)
     printf("Remaining Data:0GB");
     else
     printf("Remaining Data:%dGB",diff);
 }