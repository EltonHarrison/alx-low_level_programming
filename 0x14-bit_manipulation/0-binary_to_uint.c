#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: pointer to a string of 0s and 1s
 *
 * Return: converted number, or 0 if there is an error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		count = count << 1;

		if (*b == '1')
		{
			count = count | 1;
		}

		b++;

	}

	return (count);
}
