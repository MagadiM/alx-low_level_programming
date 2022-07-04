#include <stdio.h>
/**
 * displays all single digit numbers of base 10
 * return 0 always
 */
int main(void)
{
	int ch;
	for (ch = 48; ch <= 57; ch++)
	{
		putchar (ch);
	}
	putchar (10);
	return (0);
}
