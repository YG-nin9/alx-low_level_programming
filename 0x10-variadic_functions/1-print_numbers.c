#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print the numbers
 * @n: number of the args to be printed
 * @separator: printed between the numbers
 * @...: indicates that function take variable num of args
 * Return: the printed numbers with separatot
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int x;

	va_start(ptr, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", (va_arg(ptr, unsigned int)));
		if (x != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

