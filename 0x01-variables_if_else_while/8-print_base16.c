#include <stdio.h>
/**
 * displays all single digit numbers of base 16
 * return 0 always
 */
int main(void)
{
/**
 * displays hexadecimals
 * 123456789abcdef
 */
char ch;
int n;
for (n = 48; n <= 57; n++)
{
	putchar (n);
}
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar (ch);
}
	putchar (10);
	return (0);
}
