#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 with commas and spaces
 *
 * Description: To main - Prints numbers between 0 to 9 with commas and spaces
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
