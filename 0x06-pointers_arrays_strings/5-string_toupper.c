#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase letters
 * @str: The string
 * Return: string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != n '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')

			str[i] -= ('a' - 'A');
		i++;
	}
	return (str);
}
