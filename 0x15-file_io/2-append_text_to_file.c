#include "main.h"


/**
 * append_text_to_file - Appends text at end of file
 * @filename: name the file
 * @text_content: NULL-terminated string to add at  end of file
 * Return: 1 on success, -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int a, b = 0;
	int len = 0;


	if (filename == NULL)
		return (-1);

	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		while (b < len)
		{
			ssize_t w = write(a, text_content + b, len - b);

			if (w == -1)
			{
				close(a);
				return (-1);
			}
			b += w;
		}
	}

	close(a);
	return (1);
}
