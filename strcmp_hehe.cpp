 #include <stdio.h>

#define MAX_STRLEN 1000000

int my_strcmp(char a[], char b[]);
int main()
{
    char a[MAX_STRLEN], b[MAX_STRLEN];
    printf("Vvedi stroku #1: ");
    scanf("%[^\n]", &a);
    getchar();
    printf("Vvedi stroku #2: ");
    scanf("%[^\n]", &b);
    printf("%d", my_strcmp(a, b));
    return 0;
}

int my_strcmp(char a[], char b[])
{
    int i = 0;
    while ((a[i] == b[i]) && (a[i] != '\0' || b[i] != '\0'))
        i++;

    return a[i] - b[i];
}
