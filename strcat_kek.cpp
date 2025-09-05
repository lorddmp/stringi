#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

char* my_strcat(char a[], char b[]);

int main()
{
    char a[MAX_SIZE] = {}, b[MAX_SIZE] = {};
    
    printf("Vvedi stroku 1: ");
    scanf("%s", &a);
    
    printf("Vvedi stroku 2: ");
    scanf("%s", &b);

    my_strcat(a, b);
    
    printf("%s", a);

    return 0;
}

char* my_strcat(char a[], char b[])
{
    for (int i = 0; i < strlen(b); i++)
        a[strlen(a)] = b[i];
        
    return (a);
}