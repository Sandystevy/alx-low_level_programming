#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Positive anything is better than negative nothing
 *
 * Description: Using the main funtion
 * this prints positive and negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negetive\n", n);
	}
	return (0);
}
