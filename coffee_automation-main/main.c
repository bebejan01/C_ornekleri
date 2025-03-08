#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    int satir, sutun;
    int genislik = 60;
    int yukseklik = 13;
    char tus;
    char onay;
    int adet;
    int fiyat;
    int toplam;
    int yatirilan = 0;
    int ek_odeme;
    char kahve[50];

    do {
        system("cls");

#ifdef _WIN32
		    system("color F9");
#endif
		printf("\n\n\n");

       for (satir = 0; satir < yukseklik; satir++) {
       	printf("\t\t\t\t");
    for (sutun = 0; sutun < genislik; sutun++) {
        if (satir == 0 && sutun == 0) {
            printf("%c", 201); // Üst sol köþe
        } else if (satir == 0 && sutun == genislik - 1) {
            printf("%c", 187); // Üst sað köþe
        } else if (satir == yukseklik - 1 && sutun == 0) {
            printf("%c", 200); // Alt sol köþe
        } else if (satir == yukseklik - 1 && sutun == genislik - 1) {
            printf("%c", 188); // Alt sað köþe
        } else if (satir == 0 || satir == yukseklik - 1) {
            printf("%c", 205); // Üst ve alt kenar
        } else if (sutun == 0 || sutun == genislik - 1) {
            printf("%c", 186); // Sol ve sað kenar
        } else if (satir == 3 && sutun == (genislik - 23) / 2) {
            printf("   HOSGELDINIZ!   ");
            sutun += 17;
        } else if (satir == 5 && sutun == (genislik - 30) / 2) {
            printf("   Kahve Otomasyonu   ");
            sutun += 21;
        } else if (satir == 8 && sutun == (genislik - 35) / 2) {
            printf("Lutfen islem yapmak icin D veya d tusuna basin");
            sutun += 45;
        } else if (satir == 10 && sutun == (genislik - 33) / 2) {
            printf("   CIKIS icin ESC tusuna basiniz   ");
            sutun += 34;
        } else {
            printf(" ");
        }
    }
    printf("\n");
}


#ifdef _WIN32
		system("color F9");
#endif

        tus = getch();

        if (tus == 27) {
            system("cls");
#ifdef _WIN32
    	system("color F9");
#endif
            printf("\nCikmak istediginizden emin misiniz? (E/H): ");
            onay = getch();

            if (onay == 'E' || onay == 'e') {
                break;
            }
        } else if (tus == 'D' || tus == 'd') {
            system("cls");
#ifdef _WIN32
    	system("color 60");
#endif
            printf("\n\n\n\t\t\t\t                KAHVE CESITLERI                 \n");
            printf("\t\t\t\t-----------------------------------------------\n");
            printf("\t\t\t\t  1. Turk Kahvesi                    40 TL     \n");
            printf("\t\t\t\t  2. Espresso                        33 TL     \n");
            printf("\t\t\t\t  3. Mocha                           70 TL     \n");
            printf("\t\t\t\t  4. Americano                       47 TL     \n");
            printf("\t\t\t\t  5. Cappuccino                      52 TL     \n");
            printf("\t\t\t\t  6. Caffe Latte                     54 TL     \n");
            printf("\t\t\t\t  7. Sicak Cikolata                  69 TL     \n");
            printf("\t\t\t\t  8. Salep                           73 TL     \n\n");

            printf("\t\t\t\t Bir secim yapiniz (1-8): ");

            char secim = getch();

            if (secim == '1') {
                system("cls");
#ifdef _WIN32
    	system("color 60");
#endif
                printf("\n\n\n\t\t\t\t           TURK KAHVESI MENUSU                 \n");
                printf("\t\t\t\t-----------------------------------------------\n");
                printf("\t\t\t\t  1. Sutlu Turk Kahvesi            49 TL       \n");
                printf("\t\t\t\t  2. Damla Sakizli Turk Kahvesi    46 TL       \n");
                printf("\t\t\t\t  3. Cikolatali Turk Kahvesi       50 TL       \n");
                printf("\t\t\t\t  4. Sade Turk Kahvesi             40 TL       \n\n");

                printf("\t\t\t\tBir secim yapiniz (1-4): ");

                char alt_secim = getch();

                if (alt_secim == '1') {
                    strcpy(kahve, "Sutlu Turk Kahvesi");
                    fiyat = 49;
                } else if (alt_secim == '2') {
                    strcpy(kahve, "Damla Sakizli Turk Kahvesi");
                    fiyat = 46;
                } else if (alt_secim == '3') {
                    strcpy(kahve, "Cikolatali Turk Kahvesi");
                    fiyat = 50;
                } else if (alt_secim == '4') {
                    strcpy(kahve, "Sade Turk Kahvesi");
                    fiyat = 40;
                } else {
                    printf("\n\t\t\t\tGeçersiz secim. Ana menuye donuluyor...\n");
                    getch();
                    continue;
                }
            } else if (secim == '2') {
                system("cls");
#ifdef _WIN32
    	system("color 60");
#endif
                printf("\n\n\n\t\t\t\t           ESPRESSO MENUSU                     \n");
                printf("\t\t\t\t -----------------------------------------------\n");
                printf("\t\t\t\t   1. Double Espresso             43 TL         \n");
                printf("\t\t\t\t   2. Espresso Macchiato          40 TL         \n");
                printf("\t\t\t\t   3. Double Espresso Macchiato   46 TL         \n");
                printf("\t\t\t\t   4. Espresso                    33 TL         \n\n");

                printf("\t\t\t\t Bir secim yapiniz (1-4): ");

                char alt_secim = getch();

                if (alt_secim == '1') {
                    strcpy(kahve, "Double Espresso");
                    fiyat = 43;
                } else if (alt_secim == '2') {
                    strcpy(kahve, "Espresso Macchiato");
                    fiyat = 40;
                } else if (alt_secim == '3') {
                    strcpy(kahve, "Double Espresso Macchiato");
                    fiyat = 46;
                } else if (alt_secim == '4') {
                    strcpy(kahve, "Espresso");
                    fiyat = 33;
                } else {
                    printf("\nGecersiz secim. Ana menuye donuluyor...\n");
                    getch();
                    continue;
                }
            } else if (secim == '3') {
                system("cls");
#ifdef _WIN32
    	system("color 60");
#endif
                printf("\n\n\n\t\t\t\t            MOCHA MENUSU                       \n");
                printf("\t\t\t\t-----------------------------------------------\n");
                printf("\t\t\t\t  1. Sade Mocha                  70 TL         \n");
                printf("\t\t\t\t  2. Cikolatali Mocha            75 TL         \n\n");

                printf("Bir secim yapiniz (1-2): ");

                char alt_secim = getch();

                if (alt_secim == '1') {
                    strcpy(kahve, "Sade Mocha");
                    fiyat = 70;
                } else if (alt_secim == '2') {
                    strcpy(kahve, "Cikolatali Mocha");
                    fiyat = 75;
                } else {
                    printf("\nGecersiz secim. Ana menuye donuluyor...\n");
                    getch();
                    continue;
                }
            } else if (secim == '7') {
                system("cls");
#ifdef _WIN32
    	system("color 60");
#endif
                printf("\n\n\n\t\t\t\t            SICAK CIKOLATA MENUSU              \n");
                printf("\t\t\t\t-----------------------------------------------\n");
                printf("\t\t\t\t  1. Kahveli Sicak Cikolata        69 TL       \n");
                printf("\t\t\t\t  2. Beyaz Sicak Cikolata          73 TL       \n\n");

                printf("Bir secim yapiniz (1-2): ");

                char alt_secim = getch();

                if (alt_secim == '1') {
                    strcpy(kahve, "Kahveli Sicak Cikolata");
                    fiyat = 69;
                } else if (alt_secim == '2') {
                    strcpy(kahve, "Beyaz Sicak Cikolata");
                    fiyat = 73;
                } else {
                    printf("\nGecersiz secim. Ana menuye donuluyor...\n");
                    getch();
                    continue;
                }
            } else if (secim == '8') {
                system("cls");
#ifdef _WIN32
    	system("color 60");
#endif
                printf("\n\n\n\t\t\t\t             SALEP MENUSU                     \n");
                printf("\t\t\t\t-----------------------------------------------\n");
                printf("\t\t\t\t 1. Sekerli Salep              73 TL         \n");
                printf("\t\t\t\t 2. Sekersiz Salep             73 TL          \n\n");

                printf("Bir secim yapiniz (1-2): ");

                char alt_secim = getch();

                if (alt_secim == '1') {
                    strcpy(kahve, "Sekerli Salep");
                    fiyat = 73;
                } else if (alt_secim == '2') {
                    strcpy(kahve, "Sekersiz Salep");
                    fiyat = 73;
                } else {
                    printf("\nGecersiz secim. Ana menuye donuluyor...\n");
                    getch();
                    continue;
                }
            } else {
                switch (secim) {
                    case '4':
                        strcpy(kahve,  "Americano");
                        fiyat = 47;
                        break;
                    case '5':
                        strcpy(kahve, "Cappuccino");
                        fiyat = 52;
                        break;
                    case '6':
                        strcpy(kahve, "Caffe Latte");
                        fiyat = 54;
                        break;
                    default:
                        printf("\nGecersiz secim. Ana menuye donuluyor...\n");
                        getch();
                        continue;
                }
            }

            system("cls");
            printf("\n\n\n\t\t\t\tKac adet %s istiyorsunuz?\n\n", kahve);
            printf("\n\t\t\t\tAdet giriniz: ");


			if (scanf("%d", &adet) != 1 || adet <= 0) {
			printf("\n\t\t\t\tGecersiz secim. Ana menuye donuluyor...\n");
			getch(); 
		    while (getchar() != '\n'); 
		    continue; 
}

toplam = fiyat * adet;

            system("cls");
#ifdef _WIN32
    	system("color 60");
#endif
            printf("\n\n\n\t\t\t\t            ODEME BILGILERI                    \n");
            printf("\t\t\t\t-----------------------------------------------\n");
            printf("\t\t\t\t Toplam odemeniz gereken tutar: %d TL\n\n", toplam);

            printf("\t\t\t\t Yatiracaginiz ucreti giriniz: ");
            scanf("%d", &yatirilan);

            while (yatirilan < toplam) {
                system("cls");
#ifdef _WIN32
    	system("color 60");
#endif
                printf("\n\n\n\t\t\t\t            ODEME BILGILERI                    \n");
                printf("\t\t\t\t-----------------------------------------------\n");
                printf("\t\t\t\t Toplam odemeniz gereken tutar: %d TL\n", toplam);
                printf("\t\t\t\t Su ana kadar odediginiz miktar: %d TL\n\n", yatirilan);

                printf("\t\t\t\t ODEME MIKTARI YETERSIZ!\n");
                printf("\t\t\t\t Lutfen odediginiz miktara ilave ucret yatiriniz.\n");
                printf("\t\t\t\t Ek ucreti giriniz: ");
                scanf("%d", &ek_odeme);

                yatirilan += ek_odeme;
            }

            if (yatirilan > toplam) {
                printf("\n\t\t\t\tPara ustunuz: %d TL\n", yatirilan - toplam);
            }

            printf("\n\t\t\t\tOdemeniz basariyla alindi.\n");
            printf("\t\t\t\tAfiyet olsun. YINE BEKLERIZ.\n");
            printf("\t\t\t\tDevam etmek icin bir tusa basiniz...\n");
            tus = getch();
        }
    } while (1);

    return 0;
}

