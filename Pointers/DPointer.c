#include<stdio.h>
int * function(){
    int x = 20; // 100x00
    return &x; // 100x00 is being returned from this function
}
int main(){
    int * ptr = function(); // 100x00
    printf("The value of x is: %d\n", *ptr);
    return 0;
}