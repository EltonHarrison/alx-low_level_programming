#include <stdio.h>

/**
 * main- main function 
 *
 * Return: always 0 
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 15 ; i++)
	{
		for (j = i ; j < 15 ; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i + j != 17)
				{
					putchar('i');
					putchar(' ');
			        }
			}
		}
	}
}
