#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int satir, sutun, i, j;
	int** dizi;
	
	printf("Satir sayisi: ");
	scanf("%d", &satir);
	
	printf("Sutun sayisi: ");
	scanf("%d", &sutun);
	
	dizi = (int**)malloc(satir * sizeof(int*));
	if (dizi == NULL)
	{
		printf("Yetersiz bellek alaný\n");
		exit(1);
	}
	printf("Malloc ile hafizada %d x %d boyutunda bir matris olusturuldu\n", satir, sutun);
	for (i = 0; i < satir; i++)
		dizi[i] = (int*)malloc(sutun * sizeof(int));
		
	srand(time(NULL));
	
	printf("%d x %d matris degerleri rastgele atandi.\n\n", satir, sutun);
	for (i = 0; i < satir; i++) {
		for (j = 0; j < sutun; j++)
		{
			dizi[i][j] = (rand() % 100) + 1;
			printf("%3.0d \t ", dizi[i][j]);
		}
		
		printf("\n");
	}
	for (i = 0; i < satir; i++)
		free(dizi[i]);
	free(dizi);
	return 0;
}
