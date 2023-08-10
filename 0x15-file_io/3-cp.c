#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - normal function
 * @file: The name of the file
 * Return: gustavo
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file
 * @fd: the file
 */
void close_file(int fd)
{
	int clear;

	clear = close(fd);

	if (clear == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - main entery point
 * @argc: duuh
 * @argv: duuh
 * Return: gustavo
 */
int main(int argc, char *argv[])
{
	int copy_from, copy_to, read, write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	copy_from = open(argv[1], O_RDONLY);
	read = read(copy_from, buffer, 1024);
	copy_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);


	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write = write(copy_to, buffer, read);
		if (copy_to == -1 || write == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read = read(copy_from, buffer, 1024);
		copy_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read > 0);

	free(buffer);
	close_file(copy_from);
	close_file(copy_to);

	return (0);
}
