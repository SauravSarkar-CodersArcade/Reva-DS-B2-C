#include<iostream>
using namespace std;
void swap_letters(char * a, char * b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
void swap_numbers(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
template <typename T>
void swap_anything(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 10;
    int b = 20;
    cout << "Before: a = " << a << ", b = " << b << endl;
    swap_anything(a, b);
    cout << "After: a = " << a << ", b = " << b << endl;
    char c = 'c';
    char d = 'd';
    cout << "Before: c = " << c << ", d = " << d << endl;
    swap_anything(c, d);
    cout << "After: c = " << c << ", d = " << d << endl;
}