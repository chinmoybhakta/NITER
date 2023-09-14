#include <stdio.h>

int main() {
//FOR FIRST PART OF LOVE SHAPE
    for(int i = 2; i > 0; i--) {
        for(int k = 1; k < i; k++) {
            printf("  ");
        }
        for(int j = 2*i - 1; j < 5; j++) {
            printf("* ");
        }
        for(int k = 2*i - 1; k > 0; k--) {
            printf("  ");
        }
        for(int j = 2*i - 1; j < 5; j++) {
            printf("* ");
        }
        printf("\n");
    }

//FOR SECOND PART OF LOVE SHAPE
    for(int i = 0; i < 5; i++) {
        for(int k = 0; k < i; k++) {
            printf("  ");
        }
        for(int j = 9; j > 2*i; j--) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}