#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <unistd.h>
#include "main.h"

void print_alphabet(void);

int _putchar(char c)
	{
		return (write(1, &c, 1));
	}

void print_alphabet(void)
    {
    char out[] = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;

	for (; count < 27; count++)
	{
		putchar(out[count]);
	}
	printf("\n");
    }
#endif
