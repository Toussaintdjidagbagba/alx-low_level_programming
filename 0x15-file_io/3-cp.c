#include "main.h"

/**
* main - calls copy function
*
* @argc: command line argument count
* @argv: array of command line argument vectors
*
* Return: on success 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	copy(argv[1], argv[2]);

	return (0);
}


/**
* copy - copies contents of one file into another
*
* @file_from: file with contents to be copied
* @file_to: file to copy contents into
*
* Return: on success 0
*/

int copy(char *file_from, char *file_to)
{
	int file_f, file_t, rd_frm, wr_to;
	char *BUFF;

	BUFF = malloc(1024 * sizeof(char));

	file_f = open(file_from, O_RDONLY);
	file_t = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (file_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		free(BUFF);
		exit(98);
	}
	else
	{
		rd_frm = read(file_f, BUFF, 1024);
		wr_to = write(file_t, BUFF, rd_frm);

		if (wr_to == -1 || file_t == -1 || BUFF == NULL)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			free(BUFF);
			exit(99);
		}

		close_file(file_f);
		close_file(file_t);

		free(BUFF);
	}

	return (0);
}


/**
* close_file - closes opened file descriptor
*
* @fd: file descriptor
*/

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
