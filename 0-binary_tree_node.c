#include "binary_trees.h"

/**
 *binary_tree_node - will create a new node for a binary tree
 *@parent: will bet parent (root)
 *@value: will be the integer value of the nodes
 *Return: will return 0 if fail or return the new node if sucess
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
