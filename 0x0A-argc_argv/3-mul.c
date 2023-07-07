#include<stdio.h>
/**
 * main - is the main entery point
 * @argc:an integer
 * @argv:an array of strings
 * Return:returns 0 if succeed
 */
int main(int argc, char *argv[])
{
	int x, i;
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	i = atoi(argv[2]);
	mul = x * i;
	printf("%d\n", mul);
	return (0);
}
