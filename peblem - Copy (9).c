#include <stdio.h>

int main() {
    
    int n, x, even = 0, odd = 0, zero = 0;
    scanf("%d", &n);

    while(n > 0) {
        x = n % 10;
        (x == 0) ? (zero++) : (x % 2 == 0) ? (even++) : (odd++);
        n /= 10;
    }

    printf("Count Zero = %d\nCount Even = %d\nCount Odd = %d\n", zero, even, odd);
    return 0;
}