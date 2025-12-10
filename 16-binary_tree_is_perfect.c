#include "binary_trees.h"
/**
 * binary_tree_height - a function that count the height of the tree
 * @size_t: the size of each node side
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if(tree == NULL)
		return(0);

	if (tree->left)
		left_size += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_size += 1 + binary_tree_height(tree->right);

	if (left_size > right_size)
		return (left_size);
	else
		return (right_size);
}
/**
 * binary_tree_is_perfect - a function that check if a binary tree is perfect
 * @left_h: the left side of the binary tree
 * @right_h: the right side of the binary tree
 * Return 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int left_h, right_h;

    if (tree == NULL)
        return (0);

    if (!tree->left && !tree->right)
        return (1);

    if (!tree->left || !tree->right)
        return (0);

    left_h = binary_tree_height(tree->left);
    right_h = binary_tree_height(tree->right);

    if (left_h != right_h)
        return (0);
    if (left_h == right_h)
        return (1);

    return (binary_tree_is_perfect(tree->left) &&
            binary_tree_is_perfect(tree->right));
}
