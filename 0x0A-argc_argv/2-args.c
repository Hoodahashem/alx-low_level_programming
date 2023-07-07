#include<stdio.h>
/**
 * main - is the main entery point
 * @argc:an integer
 * @argv:an array of strings
 * Return:returns 0 if succeed
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
