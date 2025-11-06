#include<iostream>
#include<list> // Doubly Linked List
using namespace std;
int main(){ // KISS 
    list<int> lst1; // Default Constructor
    list<int> lst2(3,10); // Parameterized Constructor // 10 10 10
    list<int> lst3(lst2); // Copy Constructor
    lst1.push_front(10); // 10
    lst1.push_back(20); // 10 20
    lst1.insert(++lst1.begin(), 15); // 10 15 20
    for(auto x : lst1){
        cout << x << " ";
    }cout << endl;
    for(list<int>::iterator it = lst1.begin(); it != lst1.end(); ++it){
        cout << *it << " ";
    }cout << endl;
    for(list<int>::reverse_iterator it = lst1.rbegin(); it != lst1.rend(); ++it){
        cout << *it << " ";
    }cout << endl;
    return 0;
}