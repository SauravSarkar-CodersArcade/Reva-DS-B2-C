#include<iostream>
using namespace std;
class Employee {
public:
    // attributes / properties / fields / class variables / instance variables
    string Name;
    int Age;
    string Company;
    // methods
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
};
int main(){
    Employee e1; // Syntax 1 // class_name object;
    e1.Name = "Sahana";
    e1.Age = 29;
    e1.Company = "Bizotic";
    e1.employeeDetails();
    // class_name object = class_name();
    Employee e2 = Employee(); // Syntax 2
    e2.Name = "Ramya";
    e2.Age = 32;
    e2.Company = "Bizotic";
    e2.employeeDetails();
    return 0;
}