#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of members
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	 l = nmemb * size;
	 p = malloc(l);

	if (p == NULL)
		return (NULL);

	{
		 p[i] = 0;
		 i++;
	}

	return (p);
}
