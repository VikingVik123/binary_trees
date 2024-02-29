#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of a node.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 * Return: A pointer to the created node, NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent != NULL)
	{
		/* If the parent already has a left child*/
		if (parent->right != NULL)
		{
			/*Set the new node as the left child of the parent's current left child*/
			new->right = parent->right;

			parent->right->parent = new;

		}
		/* Set the new node as the left child of the parent*/
		parent->right = new;
	}
	return (new);
}
