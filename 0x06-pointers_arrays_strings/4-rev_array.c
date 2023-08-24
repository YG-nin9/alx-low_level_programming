#include "main.h"
/**
 * reverse_array - reverse any array to confuse people
 * @a: input
 * @n: number of elemnts in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}

