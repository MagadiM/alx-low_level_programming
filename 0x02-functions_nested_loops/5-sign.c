#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n : type int integer, can be either positive or negative
 * Description: print +, 0, or - depending on number with return
 * Return: 1 if +, 0 -f 0, _1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
