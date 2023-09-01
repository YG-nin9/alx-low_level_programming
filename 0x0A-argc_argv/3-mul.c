#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the multiply of the two arguments
 * @argv: the program name
 * @argc: the counter for the variables
 * Return: 0 in if no fail
 */
int main(int argc, char *argv[])
{
	int n;
	int x;
	int y;

	n = 3;
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	if (n == argc)
	{
		printf("%d\n", x * y);
		return  (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

