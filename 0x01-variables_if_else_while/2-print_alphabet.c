#include <stdio.h>
/**
 * main ->displays alphabets in lowercase followed by a new line
 * return 0 always (success)
 */
int main(void)
{
char ch;
for (ch = 97; ch <= 122; ch++)
{
	putchar(ch);
}
return (0);
}
