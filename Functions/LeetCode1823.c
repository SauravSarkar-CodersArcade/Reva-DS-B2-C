#include<stdio.h>
int solve(int n, int k){
    if(n == 1){
        return 0;
    }
    return (solve(n-1,k)+k) % n;
}
int findTheWinner(int n, int k) {
    int winner = solve(n,k) + 1;
    return winner;
}
int main(){
    printf("%d", findTheWinner(1,2));
}