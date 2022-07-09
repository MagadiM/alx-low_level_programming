#include "main.h"
/**
 * _isdigit - checks for integers 0 to 9
 *
 * @c : is the input character
 * return 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
