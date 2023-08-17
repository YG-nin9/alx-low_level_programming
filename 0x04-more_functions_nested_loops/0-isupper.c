#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*int _isupper - checks the lower chars
*@c: the input
*Return: 1 if out is uppercase letter, otherwise 0
*/
int _isupper(int c)
{
	/* your code goes there */
	if ((c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

