#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print the strings
 * @n: number of the args to be printed
 * @separator: printed between the strings
 * @...: indicates that function take variable num of args
 * Return: the printed numbers with separatot
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int x;
	char *str;

	va_start(ptr, n);
	for (x = 0; x < n; x++)
	{
		str = va_arg(ptr, char*);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (x != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}

