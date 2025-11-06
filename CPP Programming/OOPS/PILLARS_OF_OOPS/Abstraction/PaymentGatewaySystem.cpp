#include<iostream>
using namespace std;
class Payment {
public:
    void showIntro(){
        cout << "=== Reva Candidate Payment Portal ===" << endl;
    }
    virtual void makePayment(double amount) = 0; // Pure Virtual Function
    void showSuccess(){
        cout << "Payment processed successfully!!" << endl;
    }
};
class UPIPayment : public Payment{
public:
    void makePayment(double amount) override {
        cout << "Processing " << amount << " via UPI...\n";
        cout << "Verifying UPI ID and PIN...\n";
    }
};
class CardPayment : public Payment{
public:
    void makePayment(double amount) override {
        cout << "Processing " << amount << " via Card...\n";
        cout << "Authorizing through bank gateway...\n";
    }
};
class CashPayment : public Payment{
public:
    void makePayment(double amount) override {
        cout << "Accepting " << amount << " in cash at counter...\n";
    }
};
int main(){
    Payment* pay;
    UPIPayment upi;
    CardPayment card;
    CashPayment cash;
    pay = &upi;
    pay->showIntro();
    pay->makePayment(1500);
    pay->showSuccess();
    cout << "--------------------------------------------" << endl;
    pay = &card;
    pay->showIntro();
    pay->makePayment(1000);
    pay->showSuccess();
    cout << "--------------------------------------------" << endl;
    pay = &cash;
    pay->showIntro();
    pay->makePayment(2500);
    pay->showSuccess();
    cout << "--------------------------------------------" << endl;
}