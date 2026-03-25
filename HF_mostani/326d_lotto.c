#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int hasonlit(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, also, felso;

    srand(time(NULL));

    printf("Hany db random szamot kersz?: ");
    scanf("%d", &n);
    printf("Also hatar: ");
    scanf("%d", &also);
    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso);

    int szamok[n];

    for (int i = 0; i < n; i++)
    {
        szamok[i] = rand() % (felso - also + 1) + also;
    }

    qsort(szamok, n, sizeof(int), hasonlit);

    printf("\nA generalt szamok: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", szamok[i]);
    }
    printf("\n");

    return 0;
}