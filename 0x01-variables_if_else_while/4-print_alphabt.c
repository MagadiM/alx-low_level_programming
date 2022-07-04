#include <stdio.h>
/**
 * display alphaabetical letters except q and e
 * return 0 always
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
	putchar (ch);
}
	putchar (10);
return (0);
}
}
