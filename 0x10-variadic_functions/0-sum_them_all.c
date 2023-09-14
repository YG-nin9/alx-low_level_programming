#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all the inputed args
 * @n: number of the args to be summed
 * @...: indicates that function take variable num of args
 * Return: the sum of the args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int x, sum;

	sum = 0;
	if (n > 0)
	{
		va_start(num, n);
        	for (x = 0; x < n; x++)
        	{
                	sum += va_arg(num, const unsigned int);
        	}
        	va_end(num);
        	return (sum);
	}
	return (0);
}

