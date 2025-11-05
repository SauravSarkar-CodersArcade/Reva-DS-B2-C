#include<iostream>
using namespace std;
class Employee{
public:
    string Name;
    int Age;
    string Company;
    Employee(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
    virtual void work(){
        cout << Name << " attends meetings, sends emails, etc." << endl;
    }
};
class SoftwareDeveloper : public Employee {
public:
    string favProLang;
    SoftwareDeveloper(string name, int age, string company, string fPL)
    : Employee(name, age, company){
        favProLang = fPL;
    }
    void createApps(){
        cout << Name << " creates apps using " << favProLang << endl;
    }
    void work() override{
        cout << Name << " fixes bugs, develops apps, etc." << endl;
    }
};
class Lecturer : public Employee{
public:
    string subject;
    Lecturer(string name, int age, string company, string sub)
    : Employee(name, age, company){
        subject = sub;
    }
    void teach(){
        cout << Name << " teaches " << subject << endl;
    }
    void work() override{
        cout << Name << " gives lectures, seminars meetings, etc." << endl;
    }
};
int main(){
    Employee e1 = Employee("Ashank", 28, "Coders Arcade");
    e1.employeeDetails();
    SoftwareDeveloper s1("Jaybhargav", 21, "Wipro", "C++"); 
    s1.employeeDetails();
    s1.createApps();
    Lecturer l1("Simran", 35, "Reva", "Python");
    l1.employeeDetails();
    l1.teach(); 
    // e1.work();
    // s1.work();
    // l1.work();
    // What is the most important use of polymorphism?
    // Ans: The most important use of polymprphism is:
    // A parent class pointer(reference) can be used to access the child data
    Employee * s = &s1;
    Employee * l = &l1;
    s->work();
    l->work();
}