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
	int alph = 0;

	for (; count < 10;)
	{
		if (count == 10)
		{
			for (;alph < 7;)
			{
				putchar(97 + alph);
		
			}
		}
		else 
		{
			putchar(48 + count);
			count++;
		}
	}
	putchar('\n');
	return (0);
}

