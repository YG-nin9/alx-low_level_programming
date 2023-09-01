#include "main.h"
#include <stdio.h>
/**
 * main - print the number of arguments
 * @argv: the program name
 * @argc: the counter for the variables
 * Return: 0 in if no fail
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)*argv;
	return  (0);
}

