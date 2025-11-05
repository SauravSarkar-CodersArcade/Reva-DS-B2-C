#include<iostream>
using namespace std;
// Pascal Naming Convention -> RateOfInterest
class Reva {
public:
    void display(){
        cout << "Rukmini Knowledge Park, Reva University." << endl;
    }
    // class_name preceded by tilde (~) is a destructor
    // It is automatically called at the end of program execution!
    ~Reva(){
        cout << "Object has been destroyed!!!" << endl;
    }
};
int main(){
    Reva obj = Reva();
    obj.display(); // Heap Memory is increased
    Reva obj1 = Reva();
    obj1.display(); // Heap Memory is increased
    return 0;
}