#include<stdio.h>
/**
 * main - is the main entery point
 * @argc:an integer
 * @argv:an array of strings
 * Return:returns 0 if succeed
 */
int main(int argc, char *argv[])
{
	int x;
	int mul = 0;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	for (x = 1; x < argc; x++)
	{
		mul *= atoi(argv[x]);
	}
	printf("%d\n", mul);
}
