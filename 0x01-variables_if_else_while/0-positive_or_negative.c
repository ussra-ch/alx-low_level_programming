#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *
 * more headers goes there
 * this
 * is a
 * short description for
 * the main function
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	/**
	 * this
	 * is a short
	 * comment for the return
	 * functiom
	 */
	return (0);
}
