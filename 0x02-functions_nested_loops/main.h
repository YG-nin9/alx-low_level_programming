#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <unistd.h>
#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}
#endif
