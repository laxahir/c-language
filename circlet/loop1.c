#include<stdio.h>

int main(){
        int i,j,k;

        for(i=0;i<6;i++){
            k=41;
            for(j=0;j<6;j++){
                if(i>j){
                    printf("%d ",k++);
                }
            }
            printf("\n");
        }

    return 0;
}