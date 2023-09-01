#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*_islower - checks the lower chars
*@out: the input
*Return: 1 if out is lowercase, otherwise 0
*/
int _islower(int out)
{
	/* your code goes there */
	if (out >= 'a' && out <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

