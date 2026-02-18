//Írjon programot, ami 0 végjelig egész számokat olvas be. Írja ki a számok összegét (a végjel természetesen nem számít).

#include <stdio.h>
int main() {
    int szam;
    int total=0;
    do {
        printf("Egesz szam (vege: 0): ");
        scanf("%d",&szam);
        total += szam;
    }while(szam!=0);

    printf("Elemek osszege: %d\n",total);
    return 0;
}