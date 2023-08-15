#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*print_alphabet - print all alphabet in lowercase
*/
void print_alphabet(void)
{
	/* your code goes there */
	char out;

	for (out = 'a'; out <= 'z'; out++)
	{
		putchar(out);
	}
	putchar('\n');
}

