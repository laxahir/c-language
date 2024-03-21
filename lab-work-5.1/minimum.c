#include<stdio.h>

int main(){

    int a,b;

    printf("enter two number:");
    scanf("%d %d",&a,&b);

    if(a<b){
        printf("a is minimum:%d",a);
    }else{
        printf("b is minimum:%d",b);
    }

    return 0;
}