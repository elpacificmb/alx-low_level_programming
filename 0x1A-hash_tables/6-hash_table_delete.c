#include "hash_tables.h"

/**
 * hash_table_delete - delete a table
 * @ht: hash
 * Return: void no return
 */
void hash_table_delete(hash_table_t *ht)
{

	hash_node_t *actual, *aux;
	unsigned int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			actual = ht->array[i];
			while (actual != NULL)
			{
				aux = actual;
				free(actual->key);
				if (actual->value != NULL)
					free(actual->value);
				actual = actual->next;
				free(aux);
			}
		}
	}
	free(ht->array);
	free(ht);
}
