#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{
    char* day[] = { "Sunday" , "Monday" , "Tuesday" ,"Wednesday" , "Thursday", "Friday" , "Saturday" };
    int a = 0;
    scanf("%d", &a);
    char* p = day[a];
    printf("%s", p);

    return 0;
}


