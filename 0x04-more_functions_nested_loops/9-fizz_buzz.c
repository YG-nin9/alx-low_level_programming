#include <stdio.h>
/**
 * main - jus a programming test
 * Return: out
 */

int main(void)
{
	int num;
	int zero;

	for (num = 0; num <= 100; num++)
	{
		zero = 0;
		if ((num % 3 == zero) && (num % 5 == zero) && (num != 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3 == 0) && (num != 0))
		{
			printf("Fizz ");
		}
		else if ((num % 5 == 0) && (num != 0))
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
