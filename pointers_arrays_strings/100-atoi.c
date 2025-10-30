#include "main.h"
#include <limits.h>

/**
 * _atoi - convertit une chaîne en int
 * @s: chaîne à convertir
 * Return: entier
 */
int _atoi(char *s)
{
	long result = 0;  /* accumulateur */
	int sign = 1;     /* signe */
	int i = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				if (result > (LONG_MAX - (s[i] - '0')) / 10)
					return (sign == 1 ? INT_MAX : INT_MIN);
				result = result * 10 + (s[i] - '0');
				i++;
			}
			break;
		}
		i++;
	}

	result *= sign;

	if (result > INT_MAX)
		return (INT_MAX);
	if (result < INT_MIN)
		return (INT_MIN);

	return ((int)result);
}

