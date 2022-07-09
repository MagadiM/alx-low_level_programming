#include "main.h"

/**
 * _isupper - displays uppercase characters
 *
 * @c : the input character
 *
 * return 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		printf("%c: %d\n", c, _isupper(c));
	}
	else
		return (0);
}
