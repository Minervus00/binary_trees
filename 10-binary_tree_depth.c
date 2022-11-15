#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: depth of 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *dad = NULL;
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	dad = tree->parent;
	while (dad)
	{
		depth += 1;
		dad = dad->parent;
	}
	return (depth);
}
