#include "main.h"
/**
 * create_file - normal function
 * @filename:the file name
 * @text_content:duh
 * Return:gustavo
 */
int create_file(const char *filename, char *text_content)
{
	int w, ptr, count;

	if (text_content != NULL)
	{
		text_content[count];
		count++;
	}
	ptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(ptr, text_content, count);
	if (w == -1 || ptr == -1)
		return (-1);
	close(ptr);
	return (1);
}
