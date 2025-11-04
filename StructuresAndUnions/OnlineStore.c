#include<stdio.h>
#include<string.h>
struct Store {
    int price;
    union{
    // Shirt
        struct{
        char size[10];
        char color[10];
        char brand[20];
        }shirt;
    // Book
        struct{
        char genre[20];
        char design[20];
        int ISBN;
        }book;
    } item;
};
int main(){
    struct Store b;
    b.price = 499;
    stpcpy( b.item.book.genre,"Fiction");
    strcpy(b.item.book.design, "Hard Cover");
    b.item.book.ISBN = 121453;
    printf("Size of book is: %lu bytes.", sizeof(b));
    return 0; 
}