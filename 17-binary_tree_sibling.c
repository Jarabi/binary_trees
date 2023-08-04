#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 *
 * Return: pointer to the sibling, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	/* Check if node is a left child and return right child */
	if (node == node->parent->left)
		return (node->parent->right);

	/* Check if node is a right child and return left child */
	if (node == node->parent->right)
		return (node->parent->left);

	/* Else no sibling */
	return (NULL);
}
