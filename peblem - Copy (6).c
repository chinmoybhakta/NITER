#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        printf("1 x %d = %d\t", i, i*1);
    }
    return 0;
}