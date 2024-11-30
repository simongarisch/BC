// gcc -Wall -Wextra -std=c2x -pedantic vars.c -o vars.out
// ./vars.out
#include <stdio.h>

int main(void) {
    int i = 2;
    float f = 3.14;
    char *s = "hello, world";

    printf("%s i=%d and f=%.2f\n", s, i, f);
}
