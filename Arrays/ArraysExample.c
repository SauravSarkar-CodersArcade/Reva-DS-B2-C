#include<stdio.h>
int main(){
    int arr[] = {21,12,34,14,65,72,10,56,21,34,52};
    // What is the dynamic formula to find the size of the array
    int size = sizeof(arr) / sizeof(arr[0]); // 32/4=8
    // What happens when we print the name of the array?
    // It prints the address of the first element of the array
    printf("%d\n", *arr);
    for(int i=0; i<size; i++){
        printf("%d ", *(arr+i));
    }
    printf("\n");
    for(int i=0; i<size; i++){
        printf("%d ", (arr+i));
    }
    return 0;
}