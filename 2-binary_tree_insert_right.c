#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	/* Check if parent has right-child */
	if (parent->right)
	{
		/* set new node->right to right-child */
		new_node->right = parent->right;

		/* set right-child->parent to new_node */
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
