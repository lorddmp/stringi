#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int my_getline(void);

int main()
{
    printf("Hoho, this perfect function has read %d symbols\n", my_getline());
    return 0;
}

int my_getline(void)
{
    int i = 0, size = 256;
    int* a = (int *)malloc(size); 
    if (a == NULL)
    {
        printf("Oops, I did it again (no memory for malloc)\n");
        return 1;
    }
    char b = 0;
    
    while ((b = getchar()) != '\n')
    {
        if (i > size)
        {
            size *= 2;
            a = (int*)realloc(a, size);
            assert(a);
            if (a == NULL)
            {
                printf("Oops, memory is over haha\n");
                return 1;
            }
        }
        *(a + i) = b;
        i++;
    }
    
    return i;
}