#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <math.h>

#define ESC 27

int main() {
    int devamEt = 1; 

    while (devamEt) {
        system("color 2F");
        system("cls");
        printf("\n\n\n\t\t\tSAYI TAHMIN OYUNU\n");
        printf("\t\t\tD - Oyuna Basla\n");
        printf("\t\t\tESC - Cikis\n\n");

        char tus = getch();

        if (tus == ESC) {
            printf("Cikmak istediginizden emin misiniz? (E/H): ");
            char cevap = getch();
            if (cevap == 'E' || cevap == 'e') {
                devamEt = 0;
            }
        } else if (tus == 'D' || tus == 'd') {
            system("color 5F");
            system("cls");

            printf("\n\n\n\t\t\tSAYI TAHMIN OYUNU\n");
            printf("\t\t\t1-10 Arasinda 6 Sayiyi Giriniz.\n\n");

            int bilgisayarSayilari[6];
            srand(time(0));
            int i;
            for (i = 0; i < 6; i++) {
                bilgisayarSayilari[i] = rand() % 10 + 1;
            }

            int kullaniciSayilari[6];
            for (i = 0; i < 6; i++) {
                printf("%d. sayiyi giriniz: ", i + 1);
                int sayi;
                while (1) {
                    scanf("%d", &sayi);
                    if (sayi >= 1 && sayi <= 10) {
                        kullaniciSayilari[i] = sayi;
                        break;
                    } else {
                        printf("Lutfen 1-10 arasinda bir sayi giriniz: ");
                    }
                }
            }

            int dogruTahmin = 0;
            int skor = 0;
            for (i = 0; i < 6; i++) {
                if (bilgisayarSayilari[i] == kullaniciSayilari[i]) {
                    dogruTahmin++;
                    skor += (int)pow(10, dogruTahmin);
                }
            }
            
            printf("\nBilgisayar Sayilari: ");
            for (i = 0; i < 6; i++) {
                printf("%d ", bilgisayarSayilari[i]);
            }

            printf("\nKullanici Sayilari : ");
            for (i = 0; i < 6; i++) {
                printf("%d ", kullaniciSayilari[i]);
            }

            if (dogruTahmin == 6) {
                printf("\n\nTebrikler! Tum sayilari bildiniz. Skorunuz: %d\n", skor);
            } else if (dogruTahmin > 0) {
                printf("\n\nTebrikler! %d sayi bildiniz. Skorunuz: %d\n", dogruTahmin, skor);
            } else {
                printf("\n\nMalesef hicbir sayiyi tahmin edemediniz. Skorunuz: 0\n");
            }

            printf("\nYeniden oynamak icin bir tusa basiniz...\n");
            getch();
        }
    }

    return 0;
}


