#include<stdio.h>

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int compute_nCr(int n, int r){
    int nCr = factorial(n) / (factorial(n-r) * factorial(r));
    return nCr;
}

int main(){
    int n,r;
    printf("Enter n and r respectively to get nCr: ");
    scanf("%d %d", &n,&r);
    printf("nCr is: %d", compute_nCr(n, r));
    
    return 0;
}
