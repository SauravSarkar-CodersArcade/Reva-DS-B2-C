#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Enter the value of n & m:" << endl;
    cin >> n >> m;
    // This is a dynamic 2D array of size n x n
    // But only the box is ready, the rows are not ready
    int ** squareMatrix = new int * [n]; 
    cout << "Enter the array elements: " << endl;
    for(int i=0; i<n; i++){
        squareMatrix[i] = new int[m]; // This creates size m for each row 
        for(int j=0; j<m; j++){
            cin >> squareMatrix[i][j];
        }
    }
    cout << "The array elements are: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << squareMatrix[i][j] << " ";
        }cout << endl;
    }
    delete [] squareMatrix;
    return 0;
}