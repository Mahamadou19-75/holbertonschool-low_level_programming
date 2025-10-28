#include "main.h"
#include <stdio.h>

/**
 * main - teste la fonction _strlen
 *
 * Return: toujours 0
 */
int main(void)
{
	char *str;
	int len;
	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	
	return (0);
}

