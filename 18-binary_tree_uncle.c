#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of a node in binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size or 0 if tree is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *new;
    if (!node || !node->parent || !node->parent->parent)
        return (NULL);
    new = node->parent;
    if (node->parent->parent->right == new)
        return (node->parent->parent->left);
    return (node->parent->parent->right);
}