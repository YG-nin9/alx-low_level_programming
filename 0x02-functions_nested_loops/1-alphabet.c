#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
void alphapet(void)
{
	/* your code goes there */
	char out;
	int count;

	for (out = 'a'; out <= 'z'; count++)
	{
		putchar(out);
	}
	putchar('\n');
	return ();
}

