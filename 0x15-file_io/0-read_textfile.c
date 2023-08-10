#include "main.h"
/**
 * read_textfile - normal function
 * @filename: param
 * @letters: another one
 * Return:the nums
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ptr, lol1, lol2;
	char *bluff;

	ptr = open(filename, O_RDONLY);

	if (ptr == -1)
	{
		return (0);
	}
	bluff = malloc(sizeof(char) * letters);

	lol1 = read(ptr, bluff, letters);
	lol2 = write(1, bluff, lol1);

	free(bluff);
	close(ptr);
	return (lol2);
}
