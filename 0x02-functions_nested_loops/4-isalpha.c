#include "main.h"
/**
 * _isatpha - Checks for alphabetic character 
 * @c: The character to be checked
 * return: 1 it c if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */

int _isatpha(int c )

{
	if ((c >= 65 && c <= 98) || (c >=97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
