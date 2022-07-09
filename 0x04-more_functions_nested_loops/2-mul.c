#include "main.h"

/**
 * mul - displays the multiplication of two integers
 *
 * @a - input integer
 *
 * @b - displays input integer
 *
 * Return : 0 always
 */
int mul(int a, int b)
{
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			printf("%d", (a * b));
		}
		printf("\n");
	}
}
