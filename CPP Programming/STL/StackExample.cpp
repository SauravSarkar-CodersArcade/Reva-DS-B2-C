#include<iostream>
// #include<bits/stdc++.h> // STL Header File
#include<stack> // LIFO or FILO
using namespace std;
void printStackElements(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop(); 
    }
    cout << endl;
}
using namespace std;
int main(){
    // push, pop, size, empty
    stack<int> stack;
    stack.push(2);
    stack.push(5);
    stack.push(15);
    stack.push(50);
    cout << "Top element: " << stack.top() << endl; // Display
    stack.pop(); // Removal
    cout << "Top element: " << stack.top() << endl; 
    cout << stack.empty() << endl;
    printStackElements(stack);
    return 0;
}