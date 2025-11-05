#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
	char *s = argv[i];
	int j = 0;

	while (s[j])
	{
	if (!isdigit(s[j]))
	{
	printf("Error\n");
	return (1);
	}
	j++;
	}
	sum += atoi(s);
	}

	printf("%d\n", sum);
	return (0);
}
