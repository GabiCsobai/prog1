#include <stdio.h>
#include <math.h>

double kerulet(double r) {
    return 2 * acos(-1) * r;
}

double terulet(double r) {
    return acos(-1) * r * r;
}

int main() {
    double r;
    printf("sugar: ");
    scanf("%lf", &r);

    printf("Kerulet: %.2lf\n", kerulet(r));
    printf("Terulet: %.2lf\n", terulet(r));

    return 0;
}
