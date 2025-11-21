#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void daoxu(long long arr[], int j)
{
    int zuo = 0;
    int you = j;

    while (zuo < you)
    {
        int c = arr[zuo];
        arr[zuo] = arr[you];
        arr[you] = c;
        zuo++;
        you--;
    }
}
int main()
{
    long long arr[1000] = { 0 };
    long long n = 1;
    int j = 0;
    int i = 0;
    while (n != 0)
    {

        scanf("%lld", &n);
        arr[i] = n;
        i++;
        j++;
    }
    j -= 2;
    daoxu(arr, j);
    for (int is = 0; is <= j; is++)
    {
        printf("%lld ", arr[is]);
    }
    return 0;
}