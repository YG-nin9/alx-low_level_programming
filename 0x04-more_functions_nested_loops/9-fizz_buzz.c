#include <stdio.h>
/**
 * main - jus a programming test
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if ((num % 3 == 0))
		{
			printf("Fizz");
			putchar(' ');
		}
		else if ((num % 5 == 0))
		{
			printf("Buzz");
			putchar(' ');
		}
		else
		{
			printf("%d", num);
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
