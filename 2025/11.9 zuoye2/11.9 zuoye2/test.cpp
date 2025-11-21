#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    int  a = 2, b = 8;
//    while (b-- < 0)
//        b -= a;
//    a++;
//    printf("a = % d, b = % d\n", a, b);
//    return 0;
//}


//#include  <stdio.h>
//int main()
//{
//    int  x = 2, y = 6, z = 3;
//    do
//        y = y - 1;
//    while (z-- > 0 && ++x < 5);
//    printf("x = % d\ty = % d\tz = % d\n", x, y, z);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (n <= 2)
//    {
//        n++;
//        printf("%d\n", n);
//    }
//    return 0;
//}


#include <stdio.h>
//

#include<stdio.h>
	int main()
	{    int i, n, s = 1;
	    	printf("Please enter n:");
	   	scanf("%d", &n);
		for (i = 1; i <= n; i++)
	     	   s = s * i;
	   	printf("%d! = %d\n", n, s);
return 0;
	}
