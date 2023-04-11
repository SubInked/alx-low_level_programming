#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * read_textfile - Reads text file and prints to STDOUT.
 * @filename: Thefile to read
 * @letters: number of bytes to read and print
 *
 * Return: The actual number of bytes read
 * and printed, or 0 on failure.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	char *b;
	ssize_t rdBytes, wrBytes;


	if (filename == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
	{
		close(a);
		return (0);
	}

	rdBytes = read(a, b, letters);
	if (rdBytes == -1)
	{
		free(b);
		close(a);
		return (0);
	}

	wrBytes = write(STDOUT_FILENO, b, rdBytes);
	if (wrBytes == -1 || wrBytes != rdBytes)
	{
		free(b);
		close(a);
		return (0);
	}

	free(b);
	close(a);

	return (wrBytes);
}
