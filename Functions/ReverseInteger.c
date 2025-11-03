#include<stdio.h>
int reverseInteger(int n){
    int original = n;
    int ans = 0;
    while (n > 0){
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    printf("%d = %d\n", original, ans);
    return ans;
}
int main(){
    printf("Reverse of 123: %d", reverseInteger(1221));
    return 0;
}