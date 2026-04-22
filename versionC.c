#include <stdio.h>
#include "C10.h"

int main() {
  int m, n;
  while (scanf("%d %d", &m, &n) == 2) {
    if(!m) ++m;
    printNums(m, n);
  }
return 0;
}

void printNums(int m, int n){
    while(m <= n){
        if(squarefree(m) && palindrome(m)) printf("%d\n", m);
        ++m;
    }
}

int squarefree(int n){
    for(int i = 2; i*i <= n; ++i){
        if(n % (i*i) == 0) return 0;
    }
    return 1;
}

int digits(int n){
    if(n == 0) return 1;
    int i = 0;
    while(n){
        n /= 10;  
        ++i;
    }
    return i;
}

int palindrome(int n){
    int k = digits(n);
        int acc = 0;
        int s = n;
        while(k){
            acc = 10 * acc + (s % 10);
            s /= 10;
            --k;
        }
        return(n == acc);
    }