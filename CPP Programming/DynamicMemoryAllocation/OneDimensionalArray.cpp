#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3}; // 1,2,3,0,0 -> 4 bytes x 2 = 8 bytes wasted.
    // This is not good for large applications
    // Therefore we use new & delete for this DMA purpose 
    cout << arr[4] << endl; // 0
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    int * myarray = new int[n]; // This is a dynamic 1 D array of size n
    cout << "Enter the " << n << " array elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> myarray[i];
    }
    cout << "The " << n << " array elements are: " << endl;
    for(int i=0; i<n; i++){
        cout << myarray[i] << " ";
    } cout << endl;
    delete[]myarray; // De-Allocation
    return 0;
}