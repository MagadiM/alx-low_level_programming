#include "main.h"

#include <stdio.h>

/**
 * *src - char type string
 * @dest: char type sto the appointed string 'src'
 * @char: character type string
 * Description: copy the string pointed to by the pointer to 'src'
 * the buffer points to dest
 *Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
