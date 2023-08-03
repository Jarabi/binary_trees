#include "binary_trees.h"

int get_diff(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor of tree or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int difference;

	if (!tree)
		return (0);

	difference = get_diff(tree);
	return (difference - 1);
}

/**
 * get_diff - get difference between left and right sub-trees
 * @tree: pointer to the root node of the tree
 *
 * Return: height difference of tree or 0 if tree is NULL
 */
int get_diff(const binary_tree_t *tree)
{
	int left_height, right_height, diff;

	left_height = 0;
	right_height = 0;
	diff = 0;

	if (!tree)
		return (0);

	/* Get height of left sub_tree */
	left_height = get_diff(tree->left);

	/* Get height of right sub-tree */
	right_height = get_diff(tree->right);

	diff = 1 + (left_height - right_height);

	return (diff);
}
