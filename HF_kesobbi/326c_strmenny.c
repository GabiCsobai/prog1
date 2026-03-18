
#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int max_length = 0;
    int count = 0;

    printf("Adj meg szavakat '*' végjelig!\n");
    while (1) {
        printf("Szó: ");
        fgets(word, sizeof(word), stdin);
        word[strcspn(word, "\n")] = '\0';

        if (strcmp(word, "*") == 0) {
            break;
        }

        count++;
        int length = strlen(word);
        if (length > max_length) {
            max_length = length;
        }
    }

    printf("%d db szót adtál meg. A leghosszabb szó %d karakterből áll.\n", count, max_length);

    return 0;
}