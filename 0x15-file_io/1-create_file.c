#include "main.h"
/**
 * create_file - create a file
 * @filename: file to create
 * @text_content: content of the file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int f, lenght = 0, r, w;
	char *ch;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	while (text_content[lenght])
	{
		lenght++;
	}
	ch = malloc(sizeof(char) * lenght);
	if (ch == NULL)
	{
		free(ch);
		close(f);
		return (-1);
	}
	r = read(f, ch, lenght);
	w = write(f, ch, r);
	if (r == -1 || w == -1)
		return (-1);
	close(f);
	return (1);
}
