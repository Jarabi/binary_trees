#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	/* Check if parent is left child of grandparent */
	/* Return the right child of grandparent */
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	/* Check if parent is right child of grandparent */
	/* Return the left child of grandparent */
	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);

	/* Otherwise, no uncle */
	return (NULL);
}
