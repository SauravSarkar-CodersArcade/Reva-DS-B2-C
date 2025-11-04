#include<iostream>
using namespace std;
namespace sahil{
    int x = 200;
void add(int a, int b){
    cout << a + b << endl;
}
}
namespace jaybhargav {
    int x = 500;
void add(int a, int b){
    cout << a + b << endl;
}
}
int main(){ // :: -> Score resolution operator
    sahil::add(1,2);
    jaybhargav::add(10,20);
    bool status = true;
    cout << endl;
    cout << status;
    string name = "Saurav";
    // By default, any decimal data in C, C++, Java is double data type 
    auto x = 2.4; // auto -> iterator
    // cin can ready data only before space (null character)
    cout << endl;
    string s;
    cout << "Enter the name:" << endl;
    getline(cin, s); // To read the entire line including spaces
    cout << s;
    return 0;
}