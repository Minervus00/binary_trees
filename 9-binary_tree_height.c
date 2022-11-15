#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: the height of the binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft = 0, hright = 0;

	if (tree == NULL)
		return (0);
	hleft = binary_tree_height(tree->left) + 1;
	if (tree->left == NULL)
		hleft -= 1;

	hright = binary_tree_height(tree->right) + 1;
	if (tree->right == NULL)
		hright -= 1;
	return ((hleft > hright) ? hleft : hright);
}
