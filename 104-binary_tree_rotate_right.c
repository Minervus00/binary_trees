#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Right-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot, *temp;

	if (!tree || !tree->left)
		return (NULL);

	pivot = tree->left;
	temp = pivot->right;
	pivot->right = tree;
	tree->left = temp;
	if (temp)
		temp->parent = tree;
	temp = tree->parent;
	tree->parent = pivot;
	pivot->parent = temp;
	if (temp)
	{
		if (temp->left == tree)
			temp->left = pivot;
		else
			temp->right = pivot;
	}

	return (pivot);
}
