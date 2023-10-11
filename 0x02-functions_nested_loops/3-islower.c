#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 * Return:
 * 1 for lowercase character or 0 for anything else
 */

int _islower(int l)

{

	if (l >= 97 && l <= 122)
	{

	return (1);
	}
	return (0);
}
