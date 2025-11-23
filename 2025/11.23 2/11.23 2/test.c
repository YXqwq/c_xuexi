#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int l = 0;
    int m = 0;
    int cot = 0;
    int arr[10001] = { 0 };
    scanf("%d %d", &l, &m);
    for (int j = 0; j <= l; j++)
    {
        arr[j] = 1;
    }


    for (int i = 0; i < m; i++)
    {
        cot = 0;
        int p1 = 0;
        int p2 = 0;
        scanf("%d %d", &p1, &p2);
        for (int is = p1; is <= p2; is++)
        {
            if (arr[is] == 1)
            {
                cot++;
                arr[is] = 0;
            }
        }

    }
    int cots = 0;
    for (int js = 0; js <= l; js++)
    {
        if (arr[js] == 1)
        {
            cots++;
        }
    }
    printf("%d", cots);

    return 0;
}