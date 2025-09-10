#include <stdio.h>
#include <string.h>
#include <math.h>

int my_atoi(const char* s);

int main()
{
    char a[100] = {0};
    scanf("%s", a);
    
    printf("your number + 5 = %d\n", my_atoi(a) + 5);

    return 0;
}

int my_atoi(const char* s)
{
    int len = strlen(s), sum = 0;
    
    for(int i = 0; i < len; i++)
    {
        if (!('0' <= s[i] && s[i] <= '9'))
            return -5;
        
        sum += s[i] - '0';
        if (i == len - 1)
            break;
            
        sum *= 10;
    }
    
    return(sum);
}