#include "main.h"

/**
 * _strlen - function that checks the length of a string
 *
 * @s: function parameter
 *
 * Return: always 0
 *
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		len++;
	}
	return (len);
}
