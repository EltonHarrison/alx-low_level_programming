#include "main.h"

/**
 * _puts - function that prints strings
 * @str: function parameter
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
