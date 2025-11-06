#include<iostream>
#include<queue>
using namespace std;
void display_queue(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }cout << endl;
}
int main(){
    queue<int> numbers;
    numbers.push(10);
    numbers.push(20);
    numbers.push(0);
    numbers.push(40);
    // Front -> 10, 20, 0, 40 <- Rear or Back
    cout << "Front: " << numbers.front() << endl;
    cout << "Rear or Back: " << numbers.back() << endl;
    numbers.pop();
    cout << numbers.front() << endl;
    cout << "Size: " << numbers.size() << endl;
    display_queue(numbers);
}