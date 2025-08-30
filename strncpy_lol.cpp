#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000000

char* my_strncpy(char a[], char b[], int n);

int main()
{
    char a[MAX_SIZE] = {}, b[MAX_SIZE] = {};
    int n = 0;
    
    printf("Vvedi stroku 1: ");
    scanf("%s", &a);
    
    printf("Vvedi stroku 2: ");
    scanf("%s", &b);

    printf("Vvedi, scolco simvolov hochesh kopirovat: ");
    scanf("%d", &n);
    
    my_strncpy(a + 8, b, n);
    
    printf("%s", a);
}

char* my_strncpy(char a[], char b[], int n)
{
    for (int i = 0; i < strlen(a) && i < n; i++)
        a[i] = b[i];
    return(a);
}