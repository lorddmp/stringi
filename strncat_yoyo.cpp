#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000000

char* my_strncat(char a[], char b[], int n);

int main()
{
    char a[MAX_SIZE] = {}, b[MAX_SIZE] = {};
    int n = 0;
    
    printf("Vvedi stroku 1: ");
    scanf("%[^\n]", a);
    
    printf("Vvedi stroku 2: ");
    scanf("%[^\n]", b);

    printf("Vvedi, scolco simvolov hochesh kopirovat: ");
    scanf("%d", &n);

    my_strncat(a, b, n);
    
    printf("%s", a);

    return 0;
}

char* my_strncat(char a[], char b[], int n)
{
    for (int i = 0; i < strlen(b) && i < n; i++)
        a[strlen(a)] = b[i];

    return (a);
}