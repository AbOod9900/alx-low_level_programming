#include<stdio.h>
#include"main.c"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 **/

int main(void)
{
	int a = 10;
	int b = 15;

	printf("a=%d, b=%d\n", a, b);
	void swap_int(int *a,int *b)
	{
		int c;

		c = *a;
		*a = *b;
		*b = c;
	printf("a=%ls, b=%ls\n", a, b);
	}
	return (0);
}
