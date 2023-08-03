#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: Number of leaves or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count;

	leaf_count = 0;

	if (!tree)
		return (leaf_count);

	/* Check if root is childless */
	if (!tree->left && !tree->right)
		return (1);

	leaf_count = binary_tree_leaves(tree->left);
	leaf_count += binary_tree_leaves(tree->right);

	return (leaf_count);
}
