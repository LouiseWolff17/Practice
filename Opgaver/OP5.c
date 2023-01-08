#include <stdio.h>
/**
 * Recursion
 * When a function calls itself recursion happens like how fibonacci calls itself with fibonacci(i-1).
 */


int fibonacci(int i) {

    if(i == 0) {
        return 0;
    }

    if(i == 1) {
        return 1;
    }
    return fibonacci(i-1) + fibonacci(i-2);
}

int  main() {

    int i;

    for (i = 0; i < 10; i++) {
        printf("%d\t\n", fibonacci(i));
    }

    return 0;
}
