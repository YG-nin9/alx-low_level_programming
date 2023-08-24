#include "main.h"
/**
 * reverse_array - reverse any array to confuse people
 * @a: input
 * @n: number of elemnts in the array
 * Return: the reversed array
 */
void reverse_array(int *a, int n)
{
	int x; /* counter*/
	int holder[n];
	int y;

	y = 0;
	x = n - 1;
	while (x != 0)
	{
		holder[y] = a[x];
		y++;
		x--;
	}
	return (holder);
}

