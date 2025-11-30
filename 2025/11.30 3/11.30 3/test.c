#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int my_strstr(char* s, char* p)
{
    int cot = 0;
    char* sl = s;
    char* pl = p;
    while (*s)
    {
        sl = s;
        pl = p;
       
        while (*sl != '\0' && *pl != '\0' && *sl == *pl)
        {

            sl++;
            pl++;
            
        }
        if (*pl == '\0')
        {
            return cot;
        }
        s++;
        cot++;
    }
    return -1;
}



int main()
{
    char s[100] = "";
    scanf("%s", s);
    char p[] = "bob";
    for (int i = 0; i < (strlen(s)); i++)
    {
        s[i] = tolower(s[i]);
    }
    
    int c = my_strstr(s,p);
   
    
    printf("%d", c);
    



    return 0;
}