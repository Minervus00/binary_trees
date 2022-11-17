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

/**
 * binary_tree_level - perform a function on a specific level of a binary tree
 * @tree: pointer to the root of the tree
 * @l: level of the tree to perform a function on
 * @func: function to perform
 *
 * Return: void
 */
void binary_tree_level(const binary_tree_t *tree, size_t l, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (l == 1)
		func(tree->n);
	else if (l > 1)
	{
		binary_tree_level(tree->left, l - 1, func);
		binary_tree_level(tree->right, l - 1, func);
	}
}

/**
 * binary_tree_levelorder - goes through a binary tree using
 * levelorder traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    size_t height, i;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);
	for (i = 1; i <= height + 1; i++)
		binary_tree_level(tree, i, func);
}
