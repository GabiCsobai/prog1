//Írjon programot, ami 0 végjelig egész számokat olvas be. Írja ki, hány darab pozitív és hány darab negatív számot adott meg a felhasználó (a végjel természetesen nem számít).

#include <stdio.h>
int main() {
    int szam;
    int counter_neg=0;
    int counter_poz=0;
    do {
        printf("Egesz szam (vege: 0): ");
        scanf("%d",&szam);
        if (szam>0) {
            counter_poz++;
        }
        else if (szam<0) {
            counter_neg++;
        }
    }while(szam!=0);

    printf("Pozitiv elemek szama: %d\n",counter_poz);
    printf("Negativ elemek szama: %d\n",counter_neg);

    return 0;
}