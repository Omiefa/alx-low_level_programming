#include "main.h"

/**
 * create_file- function that creates a file
 * @filename: pointer to the file to be created
 * @text_content: the content of the file
 * Return: 1 if successful or -1 if it fails, NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, text = 1;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i])
	{
		i++;
	}
	text = write(fd, text_content, i);

	if (text == -1)
		return (-1);

	close(fd);
	return (1);
}
