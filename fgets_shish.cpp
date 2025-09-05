#include <stdio.h>
#include "isalpha_hihi.cpp"

#define MAX_SIZE 1000000

char* my_fgets(char a[], int n, FILE* fp);

int main()
{
    char a[MAX_SIZE] = {};
    int n = 0;
    FILE* fp = stdin;

    printf("Enter n: ");
    scanf("%d", &n);
    getchar();

    printf("%s", my_fgets(a, n, fp));

    return 0;
}

char* my_fgets(char a[], int n, FILE* fp)
{

    for (int i = 0; i < n - 1; i++)
    {
        char b = getc(fp);
        if (b == EOF)
            break;
        
        else if (b == '\n')
        {
            a[i] = b;
            break;
        }
        
        a[i] = b;
    }
    
    a[n - 1] = '\0';
    return (a);
}