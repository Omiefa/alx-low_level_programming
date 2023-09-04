#include "main.h"

void error_file(int file_from, int file_to, char *av[]);

/**
  *main - rogram that copies the content of a file to another file
  *@ac: argument count
  *@av: argument vector
  *Return: always 0 on success
  */
int main(int ac, char *av[])
{
	int file_from, file_to, erro_close;
	ssize_t num_chars, new;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_fromvfile_to");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, av);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(file_from, buffer, num_chars);
		if (num_chars == -1)
			error_file(-1, 0, av);
		new = write(file_to, buffer, num_chars);
			if (new == -1)
			error_file(0, -1, av);
	}

	erro_close = close(file_from);
	if (erro_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	erro_close = close(file_to);
	if (erro_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd     %d\n", file_to);
		exit(100);
	}

	return (0);
}

/**
  *error_file- check if a file is opened
  *@file_from: initial file to copy from and to check
  *@file_to: destination file to copy to
  *@av: argument vector
  *Return: void
  */

void error_file(int file_from, int file_to, char *av[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write %s\n", av[2]);
		exit(99);
	}
}
