#include <stdio.h>
/**
 * main > displays lowercase letter chracters
 * displays uppercase letter characters
 * return 0 alwys (success)
 */
int main(void)
{
char ch;
for (ch = 97; ch <= 122; ch++)
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
