#include <stdio.h>

/**
 * main - program entry point
 * void - there are no arguements
 *
 * Return 0 to exit
 */
int main(void)

{

	/*size of operator is used to evaluate the size of the variable*/
	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of a int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(long intType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long intType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
