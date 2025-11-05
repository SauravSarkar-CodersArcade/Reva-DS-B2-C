#include<iostream>
// Stream means continuous flow of bytes (1's & 0's) -> OOP 
using namespace std;
int main(){
    int arr[] = {2,1,6,4,3};
    // Traditional For Loop
    /*
    for(initialization, condition, inc/dec){
        statements;
    }
    */
   for(int i=0; i<5; i++){
        cout << arr[i] << " ";
   }
   cout << endl;
   for(int x : arr){
        cout << x << " ";
   }cout << endl;
   /*
   for(data_type var_name : collection){
        statements;
   }
   */ 
  char letters[] = {'R','E','V','A'};
  for(char letter : letters){
    cout << letter << ",";
  }
  cout << endl;
  for(auto var : letters){
    cout << var << " ";
  } // auto -> iterator
    return 0;
}