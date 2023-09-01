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
	int x;
	int y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
        y = atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
}

