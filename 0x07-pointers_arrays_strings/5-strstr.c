#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * @haystack: string to work on
 * @needle: substring to match
 *
 * Return: pointer to the first match or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (heystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (heystack + i);
	}
	return (0);
}
