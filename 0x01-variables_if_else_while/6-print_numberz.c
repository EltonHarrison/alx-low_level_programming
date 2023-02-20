#include <stdio.h>

/**
 * main-main function 
 *
 * Return: always 0
 */

int main(void)
{	
	int i;

	for (i = 'z' ; i >= 'a' ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
