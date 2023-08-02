#include "binary_trees.h"

size_t get_max_height(const binary_tree_t *tree);

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (!tree)
		return (0);

	height = get_max_height(tree);

	return (height - 1);
}


/**
 * get_max_height - calculates the height of binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of tree or 0 if tree is NULL
 */
size_t get_max_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0, max_h = 0;

	if (!tree)
		return (0);

	/* Get depth of left and right edges */
	left_h = get_max_height(tree->left);
	right_h = get_max_height(tree->right);

	/* Determine the maximum height */
	max_h = (left_h > right_h ? left_h : right_h);

	return (max_h + 1);
}
