#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return 1 for true, otherwise 0 (incl. when tree is NULL)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* Check if node is a leaf (left and right are NULL) */
	if (!tree->left && !tree->right)
		return (1);

	/* If left and right are not NULL and sub-trees are full */
	if (tree->left && tree->right)
		return (
				binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right)
		       );
	return (0);
}
