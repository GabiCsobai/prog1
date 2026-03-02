#include <stdio.h>

int main() {

    printf("Add meg a magassagot!: ");
    int m;
    scanf("%d", &m);

            for (int i = 1; i<=m; i++) {
                for (int j = 1; j <= m - i; j++) {
                    printf(" ");
                }
                for (int k = 1; k <= i; k++) {
                    printf("#");
                }
                printf(" ");
                for (int j = 1; j <= i; j++) {
                    printf("#");
                }
                printf("\n");
            }
    return 0;
}