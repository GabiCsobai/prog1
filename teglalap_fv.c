#include <stdio.h>

int kerulet(int a, int b) {
    return 2 * (a + b);
}

int terulet(int a, int b) {
    return a * b;
}

int main() {
    int a, b;
    printf("egyik oldal: ");
    scanf("%d", &a);
    printf("masik oldal: ");
    scanf("%d", &b);

    printf("Kerulet: %d\n", kerulet(a, b));
    printf("Terulet: %d\n", terulet(a, b));

    return 0;
}