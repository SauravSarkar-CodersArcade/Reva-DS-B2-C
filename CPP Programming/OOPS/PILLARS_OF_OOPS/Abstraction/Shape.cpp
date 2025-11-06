#include<iostream>
using namespace std;
class Shape { // 100% Abstract Class - Only Pure Virtual Functions
public:
    // No methods are defined in the Parent Class
    // All methods are defined in the subsequent child classes
    virtual void area() = 0; // Pure Virtual Function (Interface In Java)
};
class Circle : public Shape {
public:
    void area() override {
        cout << "Area of Circle = (pi * r * r)" << endl;
    }
};
class Rectangle : public Shape{
public:
    void area() override {
        cout << "Area of Rectangle = (length * breadth)" << endl;
    }
};
int main(){
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();
    s1->area();
    s2->area();
    delete s1;
    delete s2;
    return 0;
}