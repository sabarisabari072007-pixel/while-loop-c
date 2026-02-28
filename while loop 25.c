#include<stdio.h>
int main(){
   int n,amt,i=0,count=0,con=0,fraud=-1;
   scanf("%d",&n);
   while(i<=n){
       scanf("%d",&amt);
       if(amt>=50000){
           count++;
           con++;
           
           if(con==3 && fraud==-1){
               fraud=i+1;
           }
       }
       else{
           con=0;
       }
       i++;
   }
   if(fraud!=-1)
        printf("Fraud Triggered At Attempt:%d\n",fraud);
    else
        printf("Fraud Triggered At Attempt:Not Triggered\n");
        
    printf("High-Value Transactions:%d\n",count);
    return 0;
}