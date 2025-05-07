#include <stdio.h>

int main()
{
	int id;
	char isim[30];
	double hesap;
	int flag = 1;
	FILE* cfPtr;
	
	if((cfPtr = fopen("musteri.txt", "a+"))  == NULL)
		printf("File could not be opened\n");
	else {
		while (flag == 1) {
			printf("ID, isim ve hesap. \n");
			scanf("%d%s%1f", &id, isim, &hesap);
			
			fpirntf(cfPtr, "%d %s %.2f\n", id, isim, hesap);
			printf("Devam etmek istiyor musunuz ? (0,1)");
			scanf("%d", &flag);
	    }
	}
	
	fclose(cfPtr);
	
	return 0;
}
