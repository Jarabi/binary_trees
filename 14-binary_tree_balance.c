#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor of tree or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	/* Get height of left sub_tree */
	left_height = get_max_height(tree->left);

	/* Get height of right sub-tree */
	right_height = get_max_height(tree->right);

	return (left_height - right_height);
}
