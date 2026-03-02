#include <stdio.h>
#include <math.h>

double get_sugar() {
    double sugar;
    printf("sugar: ");
    scanf("%lf", &sugar);
    return sugar;
}

double felszin(double r) {
    return 4 * M_PI * r * r;
}

double terfogat(double r) {
    return (4.0 / 3.0) * M_PI * r * r * r;
}

int main() {
    double r = get_sugar();

    printf("Felszin: %.2lf\n", felszin(r));
    printf("Terfogat: %.2lf\n", terfogat(r));

    return 0;
}