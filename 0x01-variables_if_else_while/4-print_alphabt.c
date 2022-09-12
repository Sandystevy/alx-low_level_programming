#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Positive anything is better than negative nothing 
 *
 * Description: To print alphabet
 * Return : 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
