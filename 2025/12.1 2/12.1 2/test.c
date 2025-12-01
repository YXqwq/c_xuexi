#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{

    int n = 0;
    scanf("%d", &n);
    getchar();//读取换行
    //初始化
    char arr[4][605] = { 0 };
    int len[4] = { 0 };
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            fgets(arr[j], sizeof(arr[j]), stdin);
            unsigned int l = strlen(arr[j]);
            if (arr[j][l - 1] == '\n')
            {
                arr[j][l - 1] = '\0';
                l--;
            }
            len[j] = l;
        }

        //判断长短
        int cots_min = 0;
        int cots_max = 0;
        int min = -1;
        int max = -1;



        for (int js = 0; js < 4; js++)
        {
            int cot_min = 0;
            int cot_max = 0;
            for (int jss = 0; jss < 4; jss++)
            {
                if (js == jss)
                    continue;
                else if (len[js] > len[jss])
                {
                    cot_max++;
                    
                }
                else if (len[js] < len[jss])
                {
                    cot_min++;
                  
                }

                
            }
            if (cot_max == 3)
            {
                cots_max++;
                max = js;
            }
            else if (cot_min == 3)
            {
                cots_min++;
                min = js;
            }

        }

        if (cots_max == 1 && cots_min == 0)
        {
            printf("%c\n", 'A' + max);
        }

        else if (cots_max == 0 && cots_min == 1)
        {
            printf("%c\n", 'A' + min);
        }
        else
        {
            printf("C\n");
        }












    }








    return 0;
}