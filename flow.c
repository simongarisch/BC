// gcc -Wall -Wextra -std=c2x -pedantic flow.c -o flow.out
// ./flow.out
#include <stdio.h>

int main(void) {
    int x = 7;

    if (x == 10)
        printf("x is 10\n");

    // you'll need braces for the multiline if...
    if (x == 10) {
        printf("x is 10\n");
        printf("And also this happens when x is 10\n");
    }

    // if-else
    printf("=====\n");
    int i = 7;
    if (i == 10)
        printf("i is 10!\n");
    else if (i == 9) {
        printf("i is 9!\n");
    }
    else if (i == 8) {
        printf("i is 8!\n");
    }
    else {
        printf("i is decidedly not 10, 9, or 8.\n");
    }

    // while
    printf("=====\n");
    int z = 0;
    while (z < 3) {
        printf("z is now %d\n", z);
        z++;
    }

    // do-while
    printf("=====\n");
    i = 7;
    do {
        printf("do-while: i is %d\n", i);
        i++;
    } while (i < 10);
}
