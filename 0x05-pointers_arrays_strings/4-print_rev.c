#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: The string to be printed
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len --)
		putchar(*(s + len));
	puchchar(10);
}
