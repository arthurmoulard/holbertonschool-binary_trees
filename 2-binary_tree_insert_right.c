#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node as the right-child
 * @parent: A pointer to a node to insert the right child in.
 * @value: The value to store in the node.
 * Return: A pointer to to created node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = parent->right;
	new_node->left = NULL;

	if (parent->right)
		parent->right->parent = new_node;

	parent->right = new_node;

	return (new_node);
}
