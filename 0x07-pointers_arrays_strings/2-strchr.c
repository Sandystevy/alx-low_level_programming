#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to be searched
 * @c: character to search for
 *
 * Return: pointer to first occurence of c if it's there
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
