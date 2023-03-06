#include "main.h"

/**
 * _islower - function to be created
 *
 * @c: parameter of function
 *
 * Return: Always 0
 *
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
