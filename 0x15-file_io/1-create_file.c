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
	int len = 0;
	int a, b;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		len = strlen(text_content);

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (a == -1)
		return (-1);

	if (len > 0)
	{
		b = write(a, text_content, len);
		if (b == -1)
		{
			close(a);
			return (-1);
		}
	}

	close(a);
	return (1);
}
