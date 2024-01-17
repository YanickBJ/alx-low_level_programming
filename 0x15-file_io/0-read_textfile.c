#include "main.h"

/**
 * read_textfile - reads a text file and prints
 *  it to the POSIX standard output.
 *
 *  @filename: name of the file to be read.
 *
 *  @letters: numbers of letters printed.
 *
 *  Return:  numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fod;
	ssize_t nrd, nwr;
	char *ok;

	if (filename == NULL)
		return (0);

	fod = open(filename, O_RDONLY);

	if (fod == -1)
		return (0);

	ok = malloc(sizeof(char) * (letters));
	if (ok == NULL)
		return (0);

	nrd = read(fod, ok, letters);
	nwr = write(STDOUT_FILENO, ok, nrd);

	close(fod);

	free(ok);

	return (nwr);
}
