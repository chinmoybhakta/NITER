#include <stdio.h>
int i = 2;

int isPrime(int x) {
         if(x == 2 || x == 3) {
            return 1;
         }
         else if(x == 0 || x == 1) {
            return 0;
         }
         else {
            for(int i = 2; i < x; i++) {
                if(x % i == 0) {
                    return 0;
                }
            }
         return 1;
         }
}

int main() {

    int n, k = 2;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            while(!isPrime(k)) {
                k++;
            }
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}