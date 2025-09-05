#include <stdio.h>

void my_puts(char a[]);

int main()
{
    char a[1000000];
    scanf("%[^\n]", &a);
    
    my_puts(a);
    my_puts(a);
    my_puts(a);
    
    return 0;

}
void my_puts(char a[])
{
    for (int i = 0; a[i] != '\0'; i++)
        putchar(a[i]);
        
    putchar('\n');
}