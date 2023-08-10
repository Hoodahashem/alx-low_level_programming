#include "main.h"
/**
 * append_text_to_file - normal function
 * @filename:duuuhh
 * @text_content:duuuh
 * Return:gustavo
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ptr, count, w = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	if (text_content != NULL)
		for (count = 0; text_content[count];)
			count++;
	ptr = open(filename, O_WRONLY | O_APPEND);
	w = write(ptr, text_content, count);
	if (ptr == -1 || w == -1)
		return (-1);
	return (1);
}
