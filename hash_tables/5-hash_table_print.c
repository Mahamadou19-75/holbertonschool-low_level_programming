#include "hash_tables.h"


/**
* hash_table_print - Affiche une table de hachage
* @ht: pointeur vers la table de hachage
*
* Description :
* Cette fonction affiche le contenu de la table de hachage sous
* le format { 'clé': 'valeur', ... }
* Elle parcourt le tableau puis les listes chaînées.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1; /* Permet de gérer les virgules */


	if (ht == NULL)
	return;


	printf("{");


	for (i = 0; i < ht->size; i++)

	{
		node = ht->array[i];
		while (node)
	{

	if (!first)
	printf(", ");


	printf("'%s': '%s'", node->key, node->value);
	first = 0;
	node = node->next;

	}

	}


	printf("}\n");

}
