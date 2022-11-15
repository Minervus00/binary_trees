#include "binary_trees.h"

/**
 * count_nodes - counts child nodes of a given node in tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: size_t
 */
size_t count_nodes(const binary_tree_t *tree)
{
	size_t sleft = 0, sright = 0;

	if (tree == NULL)
		return (0);
	sleft = count_nodes(tree->left) + 1;
	if (tree->left == NULL)
		sleft -= 1;

	sright = count_nodes(tree->right) + 1;
	if (tree->right == NULL)
		sright -= 1;
	return (sleft + sright);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (count_nodes(tree) + 1);
}
