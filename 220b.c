//Írjunk egy programot, amely beolvas egy pozitív egész számot (n), majd kiírja 1-től n-ig (zárt intervallum) az összes néggyel osztható számot!
#include <stdio.h>
int main() {
    int n;
    printf("Adj meg egy pozitiv egesz szamot!: ");
    scanf("%d", &n);

    for (n;n>=1; n--) {
        if (n % 2 == 1) {
            printf("%d\n",n);
        }
    }
    return 0;
}
