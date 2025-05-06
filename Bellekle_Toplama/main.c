#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int eleman_sayisi, sayac, * pointer, toplam = 0;
	
	printf("Eleman sayisini giriniz: ");
	scanf("%d", &eleman_sayisi);
	pointer = (int*)malloc(eleman_sayisi * sizeof(int));
	if (pointer == NULL)
	{
		printf("Yetersiz bellek alaný\n");
		exit(1);
	}
	printf("Tam sayi giriniz: ");
	for(sayac = 0; sayac < eleman_sayisi; sayac++)
	{
		scanf("%d", pointer + sayac);
		toplam+= *(pointer + sayac);
	}
	printf("Toplam = %d", toplam);
	free(pointer);
	return 0;
}
