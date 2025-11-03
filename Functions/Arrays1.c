// 8822185799 
www.bizotictraining.com
20114
#include<stdio.h>
int main(){
    int arr[] = {3,1,2,1,2,3,4};
    int res = 0;
    for(int i=0; i<7; i++){
        res = res ^ arr[i];
    }
    printf("The non-repeating element in the array is: %d\n",
    res);

}