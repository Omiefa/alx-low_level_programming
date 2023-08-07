#include "main.h"

/**
 *read_textfile-funct that reads a text file and prints it to the POSIX stdout
 * @filename: the pointer to the file
 * @letters: number of bytes to be read and print
 * Return: bytes if successful, 0 if file fails, NULL or does not write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_write;

	char *temp;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);/*open file*/
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	n_read = read(fd, temp, letters);
	if (n_read == -1)
	{
		free(temp);
		close(fd);
		return (0);
	}

	n_write = write(STDOUT_FILENO, temp, n_read);
	if (n_write == -1)
	{
		free(temp);
		close(fd);
		return (0);
	}

	free(temp);
	close(fd);
	return (n_read);

}
