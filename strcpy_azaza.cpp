#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000000

char* my_strcpy(char a[], char b[]);

int main()
{
    char a[MAX_SIZE], b[MAX_SIZE];
    
    printf("Vvedi stroku 1: ");
    scanf("%[^\n]", a);
    
    printf("Vvedi stroku 2: ");
    scanf("%[^\n]", b);
    
    my_strcpy(a, b);
    
    printf("%s", a);

    return 0;
}

char* my_strcpy(char a[], char b[])
{
    for (int i = 0; i < strlen(a); i++)
        a[i] = b[i];
    
    return(a);
}