#include<set>
#include<iostream>
using namespace std;
int main(){
    set<int> numbers; // Only unique elements in ascending order
    numbers.insert(500);
    numbers.insert(100);
    numbers.insert(200);
    numbers.insert(100);
    numbers.insert(900);
    numbers.insert(300);
    numbers.insert(100);
    numbers.insert(300);
    numbers.insert(400);
    for(auto x : numbers){
        cout << x << " ";
    }cout << endl;
    return 0;
}