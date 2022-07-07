#include <stdio.h>
/**
 * main -> the program prints alphabets in lowercase
 * putchar: helps print the lowercase letters
 * Return : 0 always
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10); /* this is the ascii code for new line*/
	return (0);
}
