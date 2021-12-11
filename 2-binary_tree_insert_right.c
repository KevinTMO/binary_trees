#include "binary_trees.h"

/**
 *binary_tree_insert_right - will create right child node for right parent
 *@parent: will bet parent (root)
 *@value: will be the integer value of the nodes
 *Return: will return 0 if fail or return the new node if sucess
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
