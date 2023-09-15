#include <stdio.h>

/**
 *main - the main function
 *Return: Always (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	return (0);
}
