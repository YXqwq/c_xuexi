#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
int main()
{
    int n = 0;
    char p[1000] = "";
    scanf("%d", &n);
    scanf("%s", p);
    for (int i = 0; i < strlen(p); i++)
    {
        p[i] = p[i] - 'a';
        p[i] = (p[i] + n) % 26;

        p[i] += 'a';

    }
    printf("%s", p);
    return 0;
}