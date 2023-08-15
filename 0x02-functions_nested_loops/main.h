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

void print_alphabet_x10(void)
	{
	char out[] = "abcdefghijklmnopqrstuvwxyz";
	int re =0;
	int count = 0;

	for(;re < 10; re++)
	 {
		 for (; count < 27; count++)
		 {
			 putchar(out[count]);
		 }
		 printf("\n");
	 }
	}
#endif
