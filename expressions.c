// gcc -Wall -Wextra -std=c2x -pedantic expressions.c -o expressions.out
// ./expressions.out
#include <stdio.h>

int main(void) {
    int i = 1;

    // arithmetic
    i = i + 3;  // Addition (+) and assignment (=) operators, add 3 to i
    i = i - 8;  // Subtraction, subtract 8 from i
    i = i * 9;  // Multiplication
    i = i / 2;  // Division
    i = i % 5;  // Modulo (division remainder)
    printf("i=%d\n", i); // i=-3

    // some shortcuts...
    i = 1;
    i += 3;  // Same as "i = i + 3", add 3 to i
    i -= 8;  // Same as "i = i - 8"
    i *= 9;  // Same as "i = i * 9"
    i /= 2;  // Same as "i = i / 2"
    i %= 5;  // Same as "i = i % 5"
    printf("i=%d\n", i); // i=-3

    // ternary operator
    int x = 3;
    int y = 0;
    y += x > 10? 17: 37;
    printf("y=%d\n", y); // y=37
}