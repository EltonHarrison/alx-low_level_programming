#include "main.h"
/**
 * read_textfile - Reads a text file and print it to the POSIX standard output
 *
 * @filename: Name of the file to read
 * @letters: Name of letters to read and print
 *
 * Return: Number of bytes read and printed, 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	buffer = (char *) malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	bytes_read = fread(buffer, sizeof(char), letters, fp);
	if (bytes_read <= 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written < 0 || bytes_written != bytes_read)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);
		return (bytes_written);
}
