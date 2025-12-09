#include "binary_trees.h"
/**
 * binary_tree_balance - a function that measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int right;
    int left;
    
    if (tree == NULL)
        return 0;

    left = binary_tree_height(tree->left);
    right = binary_tree_height(tree->right);

    return (left > right ? left : right) + 1;
}