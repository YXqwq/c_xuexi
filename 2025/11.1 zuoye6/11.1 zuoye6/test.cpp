#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
   

    int a;
    printf("请在键盘上输入1-7的数字:");
    scanf("%d", &a);
   
    switch (a)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;


    case 3:
        printf("Wednesday");
        break;


    case 4:
        printf("Thursday");
        break;

    case 5:
        printf("Friday");
        break;


    case 6:
        printf("Saturday");
        break;

    case 7:
        printf("sunday");
        break;

    }



    return 0;
}