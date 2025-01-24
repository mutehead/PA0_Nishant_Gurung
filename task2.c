#include <stdio.h>

int main() {
    int i = 0;
    int fib_num[40];
    fib_num[0] = 0;
    fib_num[1] = 1;

    for (i = 2; i <= 40; i++) {
        fib_num[i] = fib_num[i-1] + fib_num[i-2];
       //  printf("%d\n", fib_numbers[i] = fib_numbers[0] + fib_numbers[i+1]);
        // printf("%d\n", fib_numbers[i] + fib_numbers[i+1]);
    }
    for (i = 0; i < 40; i++) {
        printf("%d\n", fib_num[i]);
    }
    return 0;
 }
 