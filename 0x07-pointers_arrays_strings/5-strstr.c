#include "main.h"
#include <stddef.h>
/**
 * *_strstr - locates the needle
 * @needle: needle
 * @haystack: hays
 * Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
		char *t = haystack;
		char *d = needle;

		while ((*t == *d) && (*d != '\0'))
		{
			t++;
			d++;
		}
		if (*d == '\0')
		{
			return (haystack);
		}
	return (0);
}

