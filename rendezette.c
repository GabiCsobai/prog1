#include <stdio.h>

int sorted(int n, int tomb[]) {
    for (int i = 1; i < n; i++) {
        if (tomb[i] < tomb[i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int szamok[10] = {9,8,5,6,6,7,0,8,5,2};
    // int szamok[10] = {0,1,2,3,4,5,6,7,8,9};
    int meret = 10;

    if (sorted(meret, szamok)) {
        printf("A tomb rendezett.\n");
    } else {
        printf("A tomb nem rendezett.\n");
    }

    return 0;
}