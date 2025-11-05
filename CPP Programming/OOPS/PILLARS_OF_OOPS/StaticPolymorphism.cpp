#include<iostream>
using namespace std;
class StaticPolymorphism {
public:
    static void addition(int a, int b){
        cout << a + b << endl;
    }
    static void addition(int a, int b, int c){
        cout << a + b << endl;
    }
    static void addition(double a, double b){
        cout << "Double" << endl;
        cout << a + b << endl;
    }
    static void addition(float a, float b){
        cout << "Float" << endl;
        cout << a + b << endl;
    }
};
int main(){
    StaticPolymorphism::addition(1,2);
    StaticPolymorphism::addition(1,2,3);
    StaticPolymorphism::addition(1.456f, 2.897F);
    StaticPolymorphism::addition(356.789, 234.5678);
    return 0;
}