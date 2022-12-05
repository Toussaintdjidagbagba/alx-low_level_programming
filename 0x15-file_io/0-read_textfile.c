#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of text file to be read
* @letters: number of letters to be read from the file
* Return: the actual number of letters it could read and print \n
*if the file can not be opened or read, or is NULL, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fn;
	int pnl;
	char *buffer;

	pnl = open(filename, O_RDONLY);

	if (pnl == -1)
	{
		return (0);
	}
	else
	{
		buffer = malloc(letters);

		fn = read(pnl, buffer, letters);

		write(STDOUT_FILENO, buffer, fn);

		close(pnl);
		free(buffer);
	}

	return (fn);
}
