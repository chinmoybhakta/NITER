#include <stdio.h>

int singleDigit(int a) {
   int sum = 0;
   while(a != 0) {
       sum += a % 10;
       a /= 10;
   }
   a = sum;
   if(a > 9) 
     singleDigit(a);
   else
    return a;
}

int main() {
    
    int n;
    scanf("%d", &n);

    printf("DIGITAL SUM = %d", singleDigit(n));
    return 0;
}