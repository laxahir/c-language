#include<stdio.h>

int main(){

    int no;

    printf("enter any number number:");
    scanf("%d",&no);

   if(no>0){
    printf("\n%d is positive.",no);
   }else if(no<0){
    printf("\n%d is negative.",no);
   }else{
    printf("\n%d is Neutral",no);
   }    

    return 0;
}