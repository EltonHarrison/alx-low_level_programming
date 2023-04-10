#include "main.h"
/**
 *create_file - Creates a file with the given name and writes text
 *@filename: The name of the file to create
 *@text_content: A NULL-terminated string to write to the file
 *
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int result = 1;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "w");
	if (fp == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		if (fprintf(fp, "%s", text_content) < 0)
		{
			result = -1;
		}
	}

	fclose(fp);

	return (result);
}
