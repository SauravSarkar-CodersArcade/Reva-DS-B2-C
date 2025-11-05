#include<iostream>
using namespace std;
class Employee{
private:
    string Name;
    int Age;
    string Company;
public:
// Setters
    void setName(string name){
        Name = name;
    }
    void setAge(int age){
        Age = age;
    }
    void setCompany(string company){
        Company = company;
    }
// Getters
    string getName(){
        return Name;
    }    
    int getAge(){
        return Age; 
    }
    string getCompany(){
        return Company;
    }
};
int main(){
    Employee e1;
    e1.setName("Ashank");
    e1.setAge(28);
    e1.setCompany("Coders Arcade");
    cout << e1.getName() << endl;
    cout << e1.getAge() << endl;
    cout << e1.getCompany() << endl;
}