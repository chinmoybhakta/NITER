#include <stdio.h>

int binAdd(int a, int b) {
    int carry = (a & b) << 1;
    a = a ^ b;
    b =  carry;
    if(carry == 0)
       return a;
    else
       binAdd(a, b);
}

int twosComplement(int a) {
    return binAdd(~a, 1);
}

int main() {
    
    int bin1, bin2;
    scanf("%d%d", &bin1, &bin2);

    printf("BINARY SUM = %d\nBINARY SUBTRACT  = %d", binAdd(bin1, bin2), binAdd(bin1, twosComplement(bin2)));
    return 0;
}