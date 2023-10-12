#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 * return: ...
 */

void times_table(void)

{
	int i = 0;
	while (i <= 9)
	{
	int result = 9 * i;
	printf("9 x %d = %d\n", i, result);
	i++;
	}

}
