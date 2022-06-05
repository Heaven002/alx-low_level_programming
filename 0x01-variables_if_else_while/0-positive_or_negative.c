#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description - get a random number and print the number
 * and print if it is positive, negative or it is zero.
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("% is negtive\n", n);
	else
		printf("%i is zero", n);
	return (0);
}
