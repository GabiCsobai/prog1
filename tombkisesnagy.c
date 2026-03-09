#include <stdio.h>

int min(int n, int tomb[]) {
    int min = tomb[0];
    for (int i = 1; i < n; i++) {
        if (tomb[i] < min) min = tomb[i];
    }
    return min;
}

int max(int n, int tomb[]) {
    int max = tomb[0];
    for (int i = 1; i < n; i++) {
        if (tomb[i] > max) max = tomb[i];
    }
    return max;
}

int main() {
    int szamok[10] = {9,8,5,6,6,7,0,8,5,2};
    int meret = 10;

    printf("A tomb legkisebb eleme: %d\n", min(meret, szamok));
    printf("A tomb legnagyobb eleme: %d\n", max(meret, szamok));

    return 0;
}