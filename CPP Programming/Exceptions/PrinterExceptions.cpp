#include<iostream>
using namespace std;
class Printer {
public:
    string _name;
    int _availablePaper;
    Printer(string name, int paper){
        _name = name;
        _availablePaper = paper;
    }
    void PrintDocument(string txtDocument){
        // Suppose a page can print 10 characters. There are total 40 chars
        int requiredPaper = txtDocument.length() / 10; // 40/10 = 4 Pages
        // req_pap = 20, ava_pap = 10;
        if(requiredPaper > _availablePaper){
            // throw 404;
            throw "Printer is out of paper. Add more paper before printing.";
        }
        cout << "Printing....!!!!" << txtDocument << endl;
        _availablePaper -= requiredPaper;
    }
};
int main(){
    Printer myPrinter("HP-Laserjet-3050ti", 10);
    try{
        myPrinter.PrintDocument("Atif is a SDE in Infosys.");
        myPrinter.PrintDocument("Praveen is a Data Engineer at Wipro");
        myPrinter.PrintDocument("Disha is a Software Developer at TCS");
        myPrinter.PrintDocument("Chidvilash is a SDT at IBM");
        myPrinter.PrintDocument("Sejal is a Data Analyst at Accenture.");
    }catch(int errorCode){
        cout << errorCode << ": Printer is out of paper!" << endl;
    }catch(const char* txtException){
        cout << "Error: " << txtException << endl;
    }catch(...){
        cout << "Something unexpected happened!" << endl;
    }
    cout << "Available paper: " << myPrinter._availablePaper << endl;
    return 0;
}