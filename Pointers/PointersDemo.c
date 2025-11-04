#include<stdio.h>
int main(){
    int a = 10; // 1000
    // printf("Address of a using address operator: %d\n", &a);
    printf("Address of a using address operator: %p\n", &a);
    printf("Address of a using address operator: %x\n", &a);
    int * p1, p2; // p1 is a pointer, p2 is a normal integer 
    int*ptr = &a;
    printf("Address of a using pointer: %p\n", ptr);
    // De-referencing - Obtaining value from pointer
    printf("Value of a using pointer: %d\n", *ptr);

    int ** dPtr = &ptr; // 2000
    printf("Address of pointer: %x\n", &ptr);
    printf("Address of pointer using dPtr: %x\n", dPtr);
    printf("Value of a using dPtr: %d\n", **dPtr);
    printf("%d\n", *(&a));
    return 0;
}