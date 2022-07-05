#include <stdio.h>
/**
 * main ->displays alphabets in lowercase followed by a new line
 * return : always 0 (success)
 */
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
	putchar(ch);
}
	putchar("\n");
return (0);
}
