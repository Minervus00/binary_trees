#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf (doesn't have any child)
 * @node: a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise (and also if node is NULL) 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_nodes - counts the nodes in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves in
 * Return: number of leaves in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (1 + left + right);
}
