#include "binary_trees.h"
/**
 * binary_tree_is_root -checks if node is root
 * @node: node is binary leaf
 * Return 1 if node is a root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if(node && !node->parent)
	{
		return(1);
	}
	return(0);
}
