#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            ((i + j) % 2 == 0) ? printf("1 ") : printf("0 ");
        }
        printf("\n");
    }
    return 0;
}