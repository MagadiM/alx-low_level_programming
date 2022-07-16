#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to the variable n during execution
 * positive_or_negative - displays whether a number is greater or lesser than
 * Description; prints the last digit of the number stored in the variable n
 *
 * Return : 0 (always)
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
