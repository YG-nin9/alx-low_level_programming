#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*print_sign - checks the numbers
*@n: the input
*Return: 1 if out is lowercase, otherwise 0
*/
int print_sign(int n)
{
	/* your code goes there */
	if (n > 0)
	{
		putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar ('0');
		return (0);
	}
	else 
	{
		putchar ('-');
		return(-1);
	}
}

