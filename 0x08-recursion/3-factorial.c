#include "main.h"
/**
 * factorial - does the factorial of n
 * @n: input
 * Return: tha factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

