#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000000

char* my_strcpy(char a[], char b[]);

int main()
{
    char a[MAX_SIZE], b[MAX_SIZE];
    
    printf("Vvedi stroku 1: ");
    scanf("%s", &a);
    
    printf("Vvedi stroku 2: ");
    scanf("%s", &b);
    
    my_strcpy(a + 8, b);
    
    printf("%s", a);
}

char* my_strcpy(char a[], char b[])
{
    for (int i = 0; i < strlen(a); i++)
        a[i] = b[i];
    return(a);
}