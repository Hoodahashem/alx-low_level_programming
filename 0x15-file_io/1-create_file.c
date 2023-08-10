#include "main.h"
/**
 * create_file - normal function
 * @filename:the file name
 * @text_content:duh
 * Return:gustavo
 */
int create_file(const char *filename, char *text_content)
{
	int w, ptr, count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0, text_content[count])
			count++;
	}
	ptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(ptr, text_content, count);
	if (w == -1 || ptr == -1)
		return (-1);
	close(ptr);
	return (1);
}
