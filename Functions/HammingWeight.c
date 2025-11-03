#include<stdio.h>
int hammingWeight(int n){
    int count = 0;
    while(n > 0){
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main(){
    printf("5 -> %d\n", hammingWeight(5));
    printf("15 -> %d\n", hammingWeight(15));
    printf("11 -> %d\n", hammingWeight(11));
    printf("0 -> %d\n", hammingWeight(0));
}
