#include "hash_tables.h"

/**
 * hash_table_set - adds a element
 * @ht:the hash table
 * @key: the key
 * @value: the value of the element
 * Return: 1 in success 0 in fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *actual, *element;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	actual = ht->array[i];
	while (actual)
	{
		if (strcmp(actual->key, key) == 0)
		{
			free(actual->value);
			actual->value = strdup(value);
			if (actual->value == NULL)
				return (0);
			return (1);
		}
		actual = actual->next;
	}
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);
	element->key = strdup(key);
	element->value = strdup(value);
	if (element->key == NULL  || element->value == NULL)
		return (0);
	element->next = ht->array[i];
	ht->array[i] = element;
	return (1);
}
