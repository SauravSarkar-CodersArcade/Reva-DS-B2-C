#include<iostream>
#include<cmath>
using namespace std;
class Calculator {
public:
    // This class has both normal & pure virtual functions
    // So, this class is not a 100% abstract class.
    // Concrete or normal function / method
    void showIntro(){
        cout << "=== Coders Arcade Calculator ===" << endl;
    }
    // Pure Virtual Function 
    virtual void calculate() = 0;
};
class SimpleCalculator : public Calculator {
public:
    void calculate() override {
        cout << "Addition: " << 10 + 5 << endl;
        cout << "Subtraction: " << 10 - 5 << endl;
    } 
};
class ScientificCalculator : public Calculator {
public:
    void calculate() override {
        cout << "Square root: " << sqrt(25) << endl;
        cout << "Power: " << pow(2,3) << endl;
    }     
};
int main(){
    Calculator* calc;
    SimpleCalculator simple;
    ScientificCalculator sci;
    calc = &simple;
    calc->showIntro();
    calc->calculate();
    cout << "=============== Separator ==============" << endl;
    calc = &sci;
    calc->showIntro();
    calc->calculate();
}