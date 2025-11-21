#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    long long  arr[900][900] = { 0 };
    int n = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == 0 && j == 0)
            {
                arr[i][j] = 1;
            }
            else if (i == 0)
            {
                arr[i][j] = arr[i][j - 1];
            }
            else if (j == 0)
            {
                arr[i][j] = arr[i - 1][j];

            }
            else if (j >= 1 && i >= 1)
            {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
            arr[i][j] %= (int)(1e9 + 7);
        }

    }
    printf("%lld", arr[n - 1][m - 1]);
    return 0;
}