#include<stdio.h>
#include<stdlib.h>
#include "main.h"
void close_func(int fd);
char buffer_func(char *filename);

/**
 * close_func - close function
 * @fd:the file i wanna close
 */

void close_func(int fd)
{
	int close;

	close = close(fd);
	if (close == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * buffer_func - buffer function
 * @filename:duuh
 * Return:buffer
 */
char buffer_func(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}
/**
 * main - main entery point
 * @argc:argument count
 * @argv:argument vector
 * Return:gustavo
 */
int main(int argc, char *argv[])
{
	int write, read, copy_to, copy_from;
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = buffer_func(argv[2]);
	copy_from = open(argv[1], O_RDONLY);
	read = read(copy_from, buffer, 1024);
	copy_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do{
		if (copy_from == -1 || read == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write = write(copy_to, buffer, read);
		if (write == -1 || copy_to == -1)
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		read = read(copy_from, buffer, 1024);
		copy_to = open(argv[2], O_WRONLY | O_APPEND);
	}while(read >0);
	free(buffer);
	close_func(copy_to);
	close_func(copy_from);
	return (0);
}
