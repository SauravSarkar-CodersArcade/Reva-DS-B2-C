#include<stdio.h>
#include<stdlib.h>
int main(){
    // Suppose I want to create a dynamic array of size n
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int * ptr;
    // Use of malloc
    // This becomes a dynamic array of size n
    // ptr = (int*)malloc(n * sizeof(int)); 
    // Use of calloc
    ptr = (int*)calloc(n, sizeof(int));
    printf("Enter the %d elements of the array:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    printf("The array elements are:\n");
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    printf("\nEnter the new size of the array:\n");
    scanf("%d", &n);
    realloc(ptr, n * sizeof(int));
    printf("Enter the %d new elements of the array:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    printf("The new array elements are:\n");
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}