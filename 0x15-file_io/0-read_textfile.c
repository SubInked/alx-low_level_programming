#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * read_textfile - Reads a text file and prints it to STDOUT
 * @filename: The file to be read
 * @letters: number of bytes to read and print to STDOUT
 *
 * Return: The actual number of bytes read
 * and printed, or 0 on failure.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	char *j;
	ssize_t rByts, wByts;


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
	if (rByts == -1)
	{
		free(j);
		close(i);
		return (0);
	}

	wByts = write(STDOUT_FILENO, j, rByts);
	if (wByts == -1 || wByts != rByts)
	{
		free(j);
		close(i);
		return (0);
	}

	free(j);
	close(i);

	return (wByts);
}
