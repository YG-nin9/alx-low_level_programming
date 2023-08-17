#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*_isdigit - checks if the input is digit
*@c: the input
*Return: 1 if c is digit, otherwise 0
*/
int _isdigit(int c)
{
	/* your code goes there */
	if ((c >= '0' && c <= '9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

