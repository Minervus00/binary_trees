#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node in binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size or 0 if tree is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !node->parent)
        return (NULL);
    if (node->parent->right == node)
        return (node->parent->left);
    return (node->parent->right);
}
