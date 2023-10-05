#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash
 * Return: void func no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	int flag = 1;
	hash_node_t *actual = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			actual = ht->array[i];
			while (actual != NULL)
			{
				flag == 0 ? printf(", ") : flag;
				printf("'%s': '%s'", actual->key, actual->value);
				flag = 0;
				actual = actual->next;
			}
		}
	}
	printf("}\n");
}
