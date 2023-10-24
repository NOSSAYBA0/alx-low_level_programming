#include "main.h"

/**
 * _strstr - main function
 * @needle: function parameter
 * @haystack: function parameter
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *I = haystack;
		char *P = needle;

		while (*I == *P && *P != '\0')
		{
			I++;
			p++;
		}
		if (*P == '\0')
			return (haystack);
	}
	return (0);
}
