#include "binary_trees.h"

/**
 * binary_tree_depth - return depth of node, relative to root
 * @node: node in a binary tree
 * Return: depth of node as non-negative int
 **/

size_t binary_tree_depth(const binary_tree_t *node)
{
	binary_tree_t *walker = (binary_tree_t *)node;
	size_t depth = 0;

	if (node == NULL || node->parent == NULL)
		return (0);

	/* walk back to root and count steps */
	while (walker->parent != NULL)
	{
		depth++;
		walker = walker->parent;
	}
	return (depth);
}
