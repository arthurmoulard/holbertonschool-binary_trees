#include "binary_trees.h"
/**
 * binary_tree_insert_left - Write a function that insert a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: this value of the new node
 * Return: new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

	if (value == '\0')
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

        new_node


}