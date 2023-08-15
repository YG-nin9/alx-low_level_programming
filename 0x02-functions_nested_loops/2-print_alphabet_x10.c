#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*print_alphabet - print all alphabet in lowercase
*/
void print_alphabet_x10(void)
{
	/* your code goes there */
	char out;
	int count = 0;

	while (count < 10)
	{
	for (out = 'a'; out <= 'z'; out++)
	{
		putchar(out);
	}
	putchar('\n');
}
}
