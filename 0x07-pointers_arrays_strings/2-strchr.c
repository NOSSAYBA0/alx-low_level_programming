#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: function parameter
 * @c: function parameter
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);
	}
	return (0);
}
