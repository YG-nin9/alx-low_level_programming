#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*swap_int - swaps the value of a to b and vice versa
*@a: the input
*@b: the value
*/
void swap_int(int *a, int *b)
{
	/* your code goes there */
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}

