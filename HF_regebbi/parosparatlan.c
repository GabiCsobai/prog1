#include <stdio.h>

int is_even(int n) {
    return n % 2 == 0;
}

int is_odd(int n) {
    return !is_even(n);
    // vagy
    // return n % 2 != 0;
}

int main() {
    int szam = 5;

    if (is_even(szam)) {
        printf("%d paros\n", szam);
    } else {
        printf("%d paratlan\n", szam);
    }

    return 0;
}