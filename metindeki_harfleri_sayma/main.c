#include <stdio.h>

int main() {

    char str[] = "programa";
    char ch = 'a';
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    printf("'%c' karakteri %d kez geçiyor.\n", ch, count);
    return 0;
}