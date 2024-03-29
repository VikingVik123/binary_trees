#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Function to check for leaf node
 * @node: node to check
 * return: O if node is NULL, 1 if node is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
