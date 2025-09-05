#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000000
char* my_strchr(char* a, int b);

int main()
{
    char a[MAX_SIZE] = "";
    char b = 0;

    printf("Enter string: ");
    scanf("%[^\n]", &a);

    while (getchar() != '\n');

    printf("Enter number of symbol: ");
    scanf("%c", &b);

    printf("Adress of this symbol in given string: %p\n", my_strchr(a, b));
    return 0;
}

char* my_strchr(char* a, int b)
{
    for(size_t i = 0; i < strlen(a); i++)
        if (a[i] == b)
            return &a[i];

    return NULL;
}
