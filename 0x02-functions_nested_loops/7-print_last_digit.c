#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*print_last_digit - get me the last digit
*@n: the input
*Return: last digit
*/
int print_last_digit(int n)
{
	/* your code goes there */
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;

	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
