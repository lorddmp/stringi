#include <stdio.h>
#include <string.h>
#include <math.h>

int my_atoi(char* s);

int main()
{
    char a[100] = {0};
    scanf("%s", a);
    
    printf("your number + 5 = %d\n", my_atoi(a) + 5);

    return 0;
}

int my_atoi(char* s)
{
    int len = strlen(s), sum = 0;
    
    for(int i = 0; i < len; i++)
    {
        if (!(48 <= s[len - i - 1] && s[len - i - 1] <= 57))
            return 0;
        
        sum += (s[len - i - 1] - 48) * pow(10, i);
    }
    
    return(sum);
}