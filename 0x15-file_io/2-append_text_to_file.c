#include "main.h"

/**
 *append_text_to_file- function that appends text @ the end of a file
 *@filename: the name of the file
 * @text_content: text to be appended
 * Return: 1 for success, -1 for failure, NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_des, x, n_write;

	if (filename == NULL)
		return (-1);

	f_des = open(filename, O_WRONLY | O_APPEND);
	if (f_des == -1)
	{
		return (-1);
	}


	if (text_content)
	{
		for (x = 0; text_content[x]; x++)
			;

		n_write = write(f_des, text_content, x);

		if (n_write == -1)
			return (-1);
	}

	close(f_des);

	return (1);
}
