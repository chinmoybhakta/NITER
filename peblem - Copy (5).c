#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= (2*i + 1) / 2 + 1; j++) {
           printf("%c ", j + 64);
        }
        for(int j = (2*i + 1) / 2; j >= 1; j--) {
            printf("%c ", j + 64);
        }
        printf("\n");
    }
    return 0;
}