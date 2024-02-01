#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Check if node is NULL */
	if (!node)
		return (0);

	/* Check if the node has no parent (is a root) */
	if (!node->parent)
		return (1);

	/* Node has a parent, so it's not a root */
	return (0);
}
