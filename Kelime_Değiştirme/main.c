// kullanýcý tarafýndan kalvyeden girilen bir metindeki "foo" kelimesini tespit edip "bars" olarak yazdýrma 
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char *p1;
    char *p;
    char *p2;

    printf("Enter a string: \n\n");
    gets(str1);

    p1 = str1;
    p2 = str2;

    do
    {
        p = strstr(p1, "foo");

        if (p == NULL)
        {
            // If no foo found, copy the rest of the string
            // to the second string:
            strcpy(p2, p1);
        }
        else
        {
            strncpy(p2, p1, (p - p1));

            p2 += (p - p1);

            strcpy(p2, "bars");

            p2 += 4;

            p1 = p + 3;
        }
    } while (p != NULL);

    puts(str2);
}
