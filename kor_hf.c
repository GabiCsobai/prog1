#include <stdio.h>
#include <math.h>

int main() {

    double r;

    printf("Add meg a kor sugarat!: ");
    scanf("%lf",&r);

    printf("A kor kerulete: %lf\n",2*r*M_PI);
    printf("A kor terulete: %lf\n",r*r*M_PI);

    return 0;
}