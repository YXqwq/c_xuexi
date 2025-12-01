#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
void* my_memmove(void* dest,const void* src, int num)
{
	
	assert(dest && src);
	void* p = dest;
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src =  (char*)src + 1;
				
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}

	return p;
}








int main()
{
	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr, arr + 2, 16);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;


	
}