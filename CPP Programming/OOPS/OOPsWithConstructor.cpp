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
    // Employee(string name, int age, string company){
    //     Name = name;
    //     Age = age;
    //     Company = company;
    // }
    Employee(string name, int age, string Company) : Name(name), Age(age), 
    Company(Company){} 
};
int main(){
    Employee e1("Sahana", 29, "Bizotic"); // Syntax 1 // class_name object;
    e1.employeeDetails();
    // class_name object = class_name();
    Employee e2 = Employee("Ramya", 32, "Bizotic"); // Syntax 2
    e2.employeeDetails();
    return 0;
}