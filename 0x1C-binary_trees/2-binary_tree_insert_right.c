#include "binary_trees.h"

/**
 * binary_tree_insert_right - add right node to parent node
 * @parent: parent node of right node to be created
 * @value: integer to be stored in new node
 * Return: pointer to new node
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_right_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	if (parent != NULL)
		old_right_node = parent->right;

	new_node->n = value;
	new_node->right = NULL;
	new_node->right = old_right_node;
	new_node->parent = parent;
	parent->right = new_node;

	if (old_right_node != NULL)
		old_right_node->parent = new_node;

	return (new_node);
}
