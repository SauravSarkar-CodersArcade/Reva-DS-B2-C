#include<stdio.h>
// void add(int, int); // Button // Function Prototype
int main(){
    add(1,2);
    // 1, 2 -> arguments
    char name[20] = "Saurav";
    return 0;
}
// Function Definition
void add(int a, int b){
    // Function Body
    // a, b -> parameters
    printf("Sum is: %d\n", a+b);
}