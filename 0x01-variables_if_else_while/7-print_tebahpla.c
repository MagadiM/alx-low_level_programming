#include <stdio.h>
/**
 * displays all lowercase alphabets followed by a new line
 * return 0 always
 */
int main(void)
{
	char ch;
        for (ch = 'z'; ch <= 'a'; ch--)
        {
                putchar (ch);
        }
        putchar (10);
        return (0);
}

