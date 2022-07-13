#include "main.h"
#include <stdio.h>

/**
 * print_array - print 'n' elements of an array or integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and sapce
 * Numbers should appear as they do in the array
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--;n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
