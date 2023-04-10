#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success, - on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = -1, len;
	ssize_t bytes_written;
	struct stat st;

	if (filename == NULL)
	{
		return (-1);
	}

	if (stat(filename, &st) != 0)
	{
		return (-1);
	}

	len = strlen(text_content);
	bytes_written = write(fd, text_content, len);

	close(fd);

	if (bytes_written == -1 || bytes_written != len)
	{
		return (-1);
	}

	return (1);
}
