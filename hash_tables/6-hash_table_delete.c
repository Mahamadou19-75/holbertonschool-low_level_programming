#include "hash_tables.h"


/**
* hash_table_delete - Supprime entièrement une table de hachage
* @ht: pointeur vers la table de hachage
*
* Description :
* Cette fonction libère toute la mémoire associée à la table de hachage :
* chaque paire clé/valeur, chaque noeud, chaque liste chaînée,
* puis le tableau et enfin la structure principale.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;


	if (ht == NULL)
	return;


	for (i = 0; i < ht->size; i++)
		{
	node = ht->array[i];
	while (node)
	{
	tmp = node->next; /* Sauvegarde du suivant */
	free(node->key); /* Libération de la clé */
	free(node->value); /* Libération de la valeur */
	free(node); /* Libération du noeud */
	node = tmp; /* On passe au suivant */
	}
		}


	free(ht->array); /* Libération du tableau */
	free(ht); /* Libération de la structure */
}
