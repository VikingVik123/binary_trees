#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if node is root node
 * @node: node to check
 * return: 0 if NULL, 1 if root node
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left != NULL && node->right != NULL)
	{
		return (1);
	}
	return (0);
}
