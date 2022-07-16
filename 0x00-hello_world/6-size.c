#include <stdio.h>

/**
 * main - prints the sizes of the different variable types
 * Description ; prints the size of the data types
 *
 * Return 0 to exit properly
 */

int main(void)

{

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of a int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(long intType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long intType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
