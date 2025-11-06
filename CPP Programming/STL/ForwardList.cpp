#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> forwardList = {10,20,30};
    forwardList.push_front(0);
    forwardList.push_front(50);
    for(auto x : forwardList){
        cout << x << " -> ";
    }cout << " null " << endl;
    auto it = forwardList.begin();
    while(next(it) != forwardList.end()){
        ++it;
    }
    // 50, 0, 10, 20, 30, 100
    forwardList.insert_after(it, 100);
    for(auto x : forwardList){
        cout << x << " -> ";
    }cout << " null " << endl;
    forwardList.insert_after(++it, 1000);
    for(auto x : forwardList){
        cout << x << " -> ";
    }cout << " null " << endl;
    return 0;
}