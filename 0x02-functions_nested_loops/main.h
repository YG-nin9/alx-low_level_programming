#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <unistd.h>
#include "main.h"

void print_alphabet(void);
void print_alphabet_x10(void);

int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
#endif
