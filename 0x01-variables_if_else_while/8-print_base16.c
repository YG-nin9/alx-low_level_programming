#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	/* your code goes there */
	int count = 48;

	while (count <= 102)
	{
		putchar(count);
		if (count == 57)
		{
			count += 39;
		}
		count++;
	}
	putchar('\n');
	return (0);
}

