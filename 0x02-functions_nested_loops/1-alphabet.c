#include <stdio.h>

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
}
