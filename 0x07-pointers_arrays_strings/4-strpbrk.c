#include "main.h"

/**
 * _strpbrk - locates first occurence of any bytes
 * @s: string to work on
 * @accept: pattern to match against
 *
 * Return: pointer to the first match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
