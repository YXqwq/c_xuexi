#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    char a[1000000] = "";
    scanf("%s", a);
    char* p = a;
    while (*p != '\0')
    {
        if (*p == '5')
        {
            *p = '*';
        }
        p++;
    }
    printf("%s", a);
    return 0;
}