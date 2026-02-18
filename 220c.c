//Írjunk egy programot, amely beolvas két pozitív egész számot (n1 és n2), majd a program írja ki azt a relációs jelet, amit a két érték közé helyezhetünk (<, > vagy =)!
#include <stdio.h>
int main() {

    int n1;
    int n2;

    printf("Elso szam: ");
    scanf("%d",&n1);
    printf("Masodik szam: ");
    scanf("%d",&n2);

    if (n1>n2) {
        printf(">\n");
    }
    else if (n1<n2) {
        printf("<\n");
    }
    else {
        printf("=\n");
    }

    return 0;
}