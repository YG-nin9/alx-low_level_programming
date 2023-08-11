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
	int count = 0;

	while (count <= 9)
	{
		putchar(count + 48);
		if (count != 9)
		{
			putchar('.');
			putchar(' ');
		}
		count++;
	}
	putchar('\n');
	return (0);
}

