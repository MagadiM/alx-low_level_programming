#include <stdio.h>
/**
 * main - prints the alphabet in lowercase then in uppercase
 * putchar: displays the characters
 * Return : 0 always
 */
int main(void)
{
	int ch;

	for (ch = 97; c <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}
