#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase ten times
 * Return : 0
 */
void print_alphabet_x10(void)
{
	int b = 0;
	char c;

	while (b < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		b++;
	}
}