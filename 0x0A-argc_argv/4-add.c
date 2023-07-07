#include<stdio.h>
#include<stdlib.h>
/**
 * main - is the main entery point
 * @argc:an integer
 * @argv:an array of strings
 * Return:returns 0 if succeed
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int x = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", x);
	}
	for (i = 0; i < argc; i++)
	{
		if (sizeof(atoi(argv[i])) != sizeof(x))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
