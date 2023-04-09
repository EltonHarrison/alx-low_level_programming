#include "main.h"
#include <stdio.h>

/**
 * print_binary -print the binary of an unsigned long integer
 *
 * @n: the number to be printed
 * Return: None
 */
void print_binary(unsigned long int n)
{
	unsigned long int checker = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zeros = 1;
	int i = 0;

	while (checker > 0)
	{
		if ((n & checker) != 0)
		{
			leading_zeros = 0;
			printf("1");
		}

		else if (!leading_zeros)
		{
			printf("0");
		}

		checker >>= 1;
		i++;
	}

	if (leading_zeros)
	{
		printf("0");
	}
}
