#include<iostream>
using namespace std;
class MyClass {
private:
    int data;
public:
    MyClass(){
        cout << "Default Constructor!!!" << endl;
    }
    MyClass(int value) : data(value){
        cout << "Parameterized Constructor!!!" << endl;
    }
    MyClass(MyClass& other) : data(other.data){
        cout << "Copy Constructor!!!" << endl;
    }
    void display(){
        cout << "Data: " << data << endl;
    }
};
int main(){
    MyClass o1;
    o1.display();
}