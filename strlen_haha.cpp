#include <stdio.h>

#define MAX_STRLEN 1000000

int my_strlen(char a[]);
int main()
{
    char a [MAX_STRLEN];
    printf("Vvedi stroku #1: ");
    scanf("%[^\n]", &a);
    printf("%d", my_strlen(a));
    return 0;
}

int my_strlen(char a[])
{
    int i = 0;
    while (a[i] != '\0')
        i++;
    return (i);
}
