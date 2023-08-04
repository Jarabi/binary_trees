#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"

/**
 * _pow_2 - calculates 2 raised to the power n
 * @n: the exponent
 *
 * Return: 2 to power n
 */
int _pow_2(int n)
{
	int result = 1;

	while (n > 0)
	{
		result *= 2;
		n -= 1;
	}
	return (result);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, nodes;

	if (!tree)
		return (0);

	height = get_max_height(tree);

	/* The number of nodes in a perfect binary tree with */
	/* height h is 2^(h+1) - 1. */
	nodes = _pow_2(height) - 1;

	return (nodes == (int)binary_tree_size(tree));
}
