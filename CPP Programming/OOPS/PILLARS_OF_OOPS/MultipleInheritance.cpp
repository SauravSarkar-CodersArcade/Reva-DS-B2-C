#include<iostream>
#include<cmath>
using namespace std;
// Parent Class, Super Class
class SimpleCalculator {
public:
    void add(int a, int b){
        cout << "Addition: " << a + b << endl;
    }
    void subtract(int a, int b){
        cout << "Subtraction: " << a - b << endl;
    }
};
class ScientificCalculator {
public:
    void square_root(double a){
        cout << "Square Root: " << sqrt(a) << endl;
    }
    void power(double base, double exponent){
        cout << "Power: " << pow(base, exponent);
    }
};
// Child Class, Derived Class, Base Class , Sub Class 
class SuperCalculator : public SimpleCalculator, public ScientificCalculator{

};
int main(){
    SuperCalculator supCal;
    supCal.add(1,2);
    supCal.subtract(4,5);
    supCal.square_root(25);
    supCal.power(2,3);
    return 0;
}