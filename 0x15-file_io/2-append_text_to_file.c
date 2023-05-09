#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: A pointer to the name of the file.
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fod, e, b = 0;

	if (filename == 0)
		return (-1);

	fod = open(filename, O_WRONLY | O_APPEND);
	if (fod < 0)
		return (-1);

	if (text_content == 0)
	{
		while (text_content[b])
			b++;
		e = write(fod, text_content, b);
		if (e != b)
			return (-1);
	}

	close(fod);

	return (1);
}
