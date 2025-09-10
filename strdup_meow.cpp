#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

char* my_strdup(const char* a);

int main()
{
    char a[1000000];
    scanf("%s", a);

    printf("Your string was copied in cell adress: %p\n", my_strdup(a));
    printf("String in this adress: %s\n", my_strdup(a));
    return 0;
}

char* my_strdup(const char* a)
{
    int len = strlen(a);
    char* adr_a = (char*)malloc(len*sizeof(char)); 
    if (adr_a == NULL)
        {
            printf("Oops, memory is over haha\n");
            return NULL;          
        }

    for(int i = 0; i < len; i++)
        *(adr_a + i) = a[i];
    
    return(adr_a);
}