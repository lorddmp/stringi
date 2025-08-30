#include <stdio.h>
#include <stdbool.h>

bool my_is_alpha(char a);

int main()
{
    char a = 'S';
    scanf("%c", &a);
    printf("%d", my_is_alpha(a));

    return 0;
}

bool my_is_alpha(char a)
{
    if ('A' <= a && a <= 'z')
        return true;
    else
        return false;
}
