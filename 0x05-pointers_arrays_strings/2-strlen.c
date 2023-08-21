#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/**
*_strlen - get me the length of that word
*@s: the input
*Return: the count
*/

int _strlen(char *s)
{
	/* your code goes there */
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

