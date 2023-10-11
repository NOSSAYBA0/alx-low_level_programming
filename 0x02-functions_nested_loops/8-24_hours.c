#include "main.h"
#include <stdio.h>

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 * return:..
 */
 
void jack_bauer(void)
{

	int hours, minutes;
	for (hours = 0; hours < 24; hours++)
	{
	for (minutes = 0; minutes < 60; minutes++)
	{
	printf("%02d:%02d Jack Bauer\n", hours, minutes);
	}
	}
}

