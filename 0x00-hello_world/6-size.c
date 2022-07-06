#include <stdio.h>

/**
 *main print the size of the various types
 *Return; 0
 */
int main(void)
{
	/*size of operator is used to evaluate the size of the variable*/
	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of a int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long intType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long intType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
