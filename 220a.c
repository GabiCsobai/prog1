//Írjunk egy programot, amely beolvas egy pozitív egész számot (n), majd kiírja 1-től n-ig (zárt intervallum) az összes néggyel osztható számot!
#include <stdio.h>
int main() {
    int n;
    printf("Adj meg egy szamot!: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 4 == 0) {
            printf("%d\n",i);
        }
    }
    return 0;
}
