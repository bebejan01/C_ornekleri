// iki stringin ayný olup olmadýðýný strcmp fonksiyonu kullanmadan yapan c programý

#include <stdio.h>

void compareStrings(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            printf("Stringler farklýdýr.\n");
            return;
        }
        str1++;
        str2++;
    }

    // Eðer ikisi de '\0' ise stringler aynýdýr
    if(*str1 == '\0' && *str2 == '\0') {
        printf("Stringler aynýdýr.\n");
    } else {
        printf("Stringler farklýdýr.\n");
    }
}

int main() {
    char str1[] = "Merhaba";
    char str2[] = "Merhaba";

    compareStrings(str1, str2);

    return 0;
}
