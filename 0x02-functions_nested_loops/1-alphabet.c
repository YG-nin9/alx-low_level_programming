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
char print_alphabet(void);

int main(void)
{
	/* your code goes there */
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z'};
	int count = 0;
	
	char print_alphabet(void)
	{
		for (; count < 26;)
		{
			printf("%c", alpha[count]);
			count++;
		}
		printf("\n");
	}
	print_alphabet();
	return (0);
}

