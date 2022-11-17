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

/**
 * ipow - puissance
 * @a: int
 * @b: int
 * Return: the size or 0 if tree is NULL
 */
size_t ipow(int b, int e)
{
	if (e==0)
		return 1;
	else if (b==0)
		return 0;
	else
		return b*ipow(b,e-1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size or 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return ((ipow(2, (binary_tree_height(tree) + 1)) - 1) == binary_tree_size(tree));
}
