#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    scanf("%d %d", &n, &m);
    char arr[1000][1000] = { 0 };
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf(" %c", &arr[i][j]);
        }


    }


    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            int cot = 0;
            if (arr[i][j] == '*')
            {
                ;
            }
            else
            {

           
            // 八个方向的偏移量
            int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
            int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
            for (int k = 0; k < 8; k++)
            {
                int ni = i + dx[k];
                int nj = j + dy[k];
                if (ni >= 0 && ni < n && nj >= 0 && nj < m)//边界检查
                {
                    if (arr[ni][nj] == '*')
                    {
                        cot++;
                    }
                }

            }
            arr[i][j] = cot + '0';
            }
        }


    }







    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%c", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}