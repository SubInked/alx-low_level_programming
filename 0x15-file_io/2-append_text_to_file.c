#include "main.h"

/**
 * append_text_to_file - Appends text to the end
 * of the file
 * @filename: name the file
 * @text_content: NULL-terminated string to
 * be added to the end of the file
 * Return: 1 success, -1 failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int i, j = 0;
	int len = 0;


	if (filename == NULL)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		while (j < len)
		{
			ssize_t wr = write(i, text_content + j, len - j);

			if (wr == -1)
			{
				close(i);
				return (-1);
			}
			j += wr;
		}
	}

	close(i);
	return (1);
}
