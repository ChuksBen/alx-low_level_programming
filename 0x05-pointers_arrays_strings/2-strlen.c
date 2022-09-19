#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: character to print out
 *
 *  Return: Always o.
 */

int _strlen(char *s)


{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
