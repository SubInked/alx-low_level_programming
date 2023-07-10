#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


/**
 * create_file - Creates a new file and writes text in it
 * @filename: file to create
 * @text_content: The NULL-terminated string to write in file.
 *
 * Return: 1 on success, -1 on failure.
 */


int create_file(const char *filename, char *text_content)
{
	int  i, j;
	int len = 0;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		len = strlen(text_content);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);

	if (len > 0)
	{
		j = write(i, text_content, len);
		if (j == -1)
		{
			close(i);
			return (-1);
		}
	}

	close(i);
	return (1);
}
