#define _CRT_SECURE_NO_WARNINGS
//

//#include <stdio.h>
//int main()
//{
//    int i;
//    for (i = 1; i < 6; i++)
//    {
//        if (i % 2) { printf("#"); continue; }
//        printf("*");
//    }
//    printf("\n");
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int s = 0, t, i, j;
//	for (i = 1; i <= 3; i++)
//	{
//		t = 1;
//		for (j = 1; j <= 2 * i - 1; j++)
//			t = t * j;
//		s = s + t;
//	}
//	printf("%-5d\n", s);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int y, a;
//    y = 2; a = 1;
//    while (y-- != -1)
//    {
//        do
//        {
//            a *= y;
//            a++;
//        } while (y--);
//    }
//    printf("%d,%d\n", a, y);
//    return 0;
//}

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4 - i; j++)
            printf(" ");
        for (j = 1; j <=  i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
