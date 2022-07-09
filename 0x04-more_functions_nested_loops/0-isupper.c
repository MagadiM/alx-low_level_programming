#include "main.h"

/**
 * _isupper - checks for uppercase letter characters
 * @c : this is an input character
 * return 1 for uppercase letters and 0 for others
 */
int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
