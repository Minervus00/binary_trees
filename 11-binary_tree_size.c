#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sleft = 0, sright = 0;

	if (tree == NULL)
		return (0);
	sleft = binary_tree_size(tree->left) + 1;
	if (tree->left == NULL)
		sleft -= 1;

	sright = binary_tree_size(tree->right) + 1;
	if (tree->left != NULL && tree->right == NULL)
		sright -= 1;
	return (sleft + sright);
}
