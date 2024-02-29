#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to store the new node.
 * Return: A pointer to the created node, NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent != NULL)
	{
		/* If the parent already has a left child*/
		if (parent->left != NULL)
		{
			/*Set the new node as the left child of the parent's current left child*/
			new->left = parent->left;
			parent->left->parent = new;
		}
		/* Set the new node as the left child of the parent*/
		parent->left = new;
	}
	return (new);
}
