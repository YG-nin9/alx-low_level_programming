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
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z'};
	char ALPHA[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
'X', 'Y', 'Z'};
	int count = 0;
	int COUNT = 0;

	for (; count < 26;)
	{
		printf("%c", alpha[count]);
		count++;
	}
	for (; COUNT < 26;)
        {
                printf("%c", ALPHA[COUNT]);
                COUNT++;
        }
        printf("\n");
	return (0);
}

