#include<iostream>
using namespace std;
class Father {
public:
    virtual void building(){
        cout << "Father's Building was a hotel!" << endl;
    }
};
class Daughter : public Father {
public:
    void building () override {
        cout << "Daughter renovated the Building to a Boutique!" << endl;
    }
};
class Son : public Father {
public:
    void building() override {
        cout << "Son renovated the Building to a Gym!" << endl;
    }
};
int main(){
    Father f;
    Daughter d;
    Son s;
    f.building();
    d.building();
    s.building();
    return 0;
}