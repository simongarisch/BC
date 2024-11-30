// gcc -Wall -Wextra -std=c2x -pedantic vars.c -o vars.out
// ./vars.out
#include <stdio.h>
#include <stdbool.h> // header was introduced in C99

int main(void) {
    // int, float and char...
    int i = 2;
    float f = 3.14;
    char *s = "hello, world";

    printf("%s i=%d and f=%.2f\n", s, i, f);

    // bools
    bool x = true;

    if (x) {
        printf("x is true!\n");
    }
}
