#include<stdio.h>
/**
 * print_alphabet - prints alphabets on the screen
 *
 * Description: this will prints something
 *
 * main - Entry point
 *
 * Description: Descriptive of what the main function does
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char x;

	for (x = "a"; x <= "z"; x++)
	{
	printf(x);
	};
}
int main(void)
{
	print_alphabet();
	return (0);
}
