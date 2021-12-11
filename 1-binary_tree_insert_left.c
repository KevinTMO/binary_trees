#include "binary_trees.h"

/**
 *binary_tree_insert_left - will create child node for parent
 *@parent: will bet parent (root)
 *@value: will be the integer value of the nodes
 *Return: will return 0 if fail or return the new node if sucess
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (0);
	}

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (0);
	}

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
