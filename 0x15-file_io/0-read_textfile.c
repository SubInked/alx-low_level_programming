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
	int i;
	char *j;
	ssize_t rdBytes, wrBytes;


	if (filename == NULL)
		return (0);

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);

	j = malloc(sizeof(char) * letters);
	if (j == NULL)
	{
		close(i);
		return (0);
	}

	rdBytes = read(i, j, letters);
	if (rdBytes == -1)
	{
		free(j);
		close(i);
		return (0);
	}

	wrBytes = write(STDOUT_FILENO, j, rdBytes);
	if (wrBytes == -1 || wrBytes != rdBytes)
	{
		free(j);
		close(i);
		return (0);
	}

	free(j);
	close(i);

	return (wrBytes);
}
