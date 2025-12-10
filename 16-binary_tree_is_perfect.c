#include "binary_trees.h"
/**
 * binary_tree_is_perfect - a funtion that check if the binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left == tree->right)
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	return (0);
}