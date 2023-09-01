#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*_isalpha - checks the lower chars
*@test: the input
*Return: 1 if out is lowercase, otherwise 0
*/
int _isalpha(int test)
{
	/* your code goes there */
	if ((test >= 'a' && test <= 'z') || (test >= 'A' && test <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

