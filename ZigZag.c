#include<stdio.h>
int main(){
    int cols = 17;
    for(int r=1; r<=3; r++){
        for(int c=1; c<=cols; c++){
            if(r==1 && c%4==3 || r==2 && c%2==0 || r==3 && c%4==1){
                printf("* ");
            }else{
                printf("  ");
            }
        }printf("\n");
    }
    return 0;
}