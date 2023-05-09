#include "main.h"
/**
 * read_textfile - func that reads a text file an prints it to posix
 * @filename: the file name
 * @letters: number of letters should be read and print
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	int w;
	char *ch;
	
	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
	{
		close(f);
		return (0);
	}
	w = read(f, ch, letters);
	if (w == -1)
	{
		free(ch);
		close(f);
		return (0);
	}
	close(f);
	return (w);
}
