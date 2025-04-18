// iki stringin ayn� olup olmad���n� strcmp fonksiyonu kullanmadan yapan c program�

#include <stdio.h>

void compareStrings(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            printf("Stringler farkl�d�r.\n");
            return;
        }
        str1++;
        str2++;
    }

    // E�er ikisi de '\0' ise stringler ayn�d�r
    if(*str1 == '\0' && *str2 == '\0') {
        printf("Stringler ayn�d�r.\n");
    } else {
        printf("Stringler farkl�d�r.\n");
    }
}

int main() {
    char str1[] = "Merhaba";
    char str2[] = "Merhaba";

    compareStrings(str1, str2);

    return 0;
}
