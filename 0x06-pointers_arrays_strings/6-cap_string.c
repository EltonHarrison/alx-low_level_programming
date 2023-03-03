#include <ctype.h>
#include <string.h>

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to modify.
 */
char *cap_string(char *);
{
	int i;
	int len = strlen(str);

    /* Capitalize first letter of string */
	if (len > 0)
		str[0] = toupper(str[0]);

    /* Capitalize first letter of each word */
	for (i = 1; i < len; i++)
	{
	if (isspace(str[i - 1]) && isalpha(str[i]))
		str[i] = toupper(str[i]);
	}
}

