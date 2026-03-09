#include <stdio.h>

int valid_triangle(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) return 0;

    if (a + b > c && a + c > b && b + c > a) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    printf("A=3, B=4, C=5: %s\n", valid_triangle(3, 4, 5) ? "Igen" : "Nem");

    return 0;
}