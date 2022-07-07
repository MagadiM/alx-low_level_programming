#include <stdio.h>
/**
 * main -> prints all the letters except q and e
 * putchar; print out the letters
 * return: 0 always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar(10);

	return (0);
}
