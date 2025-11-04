#include "main.h"

/**
 * _strspn - retourne la longueur du préfixe initial de s composé
 *            uniquement de caractères présents dans accept
 * @s: chaîne à analyser
 * @accept: chaîne contenant les caractères autorisés
 *
 * Return: nombre de caractères initiaux de s présents dans accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;
	int found;

	while (s[i])
	{
		found = 0;
		for (j = 0; accept[j]; j++)
		{
		if (s[i] == accept[j])
		{
		found = 1;
		break;
		}
	}

	if (!found)
	break;
	i++;
	}

	return (i);
}
