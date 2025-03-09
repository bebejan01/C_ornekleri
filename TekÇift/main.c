#include <stdio.h>

void tekCift(int val, int n)
{   
    if ( val > n)
        return;
    printf("%d ", val);
    tekCift(val + 2, n);
}

int main()
{
    int n;
    printf(" Verilen araliktaki tek ve cift sayilari yazdir :\n");

    printf(" 1'den n'ye kadar sayilari yazdir. n degerini giriniz: ");
    scanf("%d", &n);

    printf("\n 1 - %d araligindaki cift sayilari : ", n);
    tekCift(2, n);

    printf("\n 1 - %d araligindaki tek sayilar : ", n);
    tekCift(1, n);
    return 0;
}
