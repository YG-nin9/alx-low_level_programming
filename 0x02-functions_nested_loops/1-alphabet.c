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

/**
*print_alphabet - print all alphabet in lowercase
*/

void print_alphabet(void)
{
	/* your code goes there */

	for (char out = 'a'; out <= 'z'; out++)
	{
		putchar(out);
	}
	putchar('\n');
}

