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
	char alpha [26] = {'a'..'z'};
	int count = 0;

	for (;count < 26;)
	{
		printf("%c", alpha[count]);
		count ++;
	}
	return (0);
}

