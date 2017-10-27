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

/**
 *binary_trees_ancestor - find nearest common ancestor of two nodes in a tree
 * @first: first node to analyze
 * @second: second node to compare
 * Return: pointer to nearest common ancestor
 **/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *tmp1, *tmp2;
	size_t depth_1 = 0, depth_2 = 0;
	int i, diff;

	tmp1 = (binary_tree_t *)first;
	tmp2 = (binary_tree_t *)second;

	if (!first || !second)
		return (NULL);

	/* find depth for first node and second node */
	depth_1 = binary_tree_depth(first);
	depth_2 = binary_tree_depth(second);
	diff = (int)(depth_1 - depth_2);

	if (diff < 0)  /* second node is deeper */
		for (i = diff; i < 0; i++)
			tmp2 = tmp2->parent;
	else  /* same, or first node is deeper */
		for (i = 0; i < diff; i++)
			tmp1 = tmp1->parent;

	while (tmp1->parent != NULL)
	{
		if (tmp1 == tmp2)
			return (tmp1);
		tmp1 = tmp1->parent;
		tmp2 = tmp2->parent;
	}
	return (tmp1); /* tmp1->parent is NULL, so it's also the root */
}
