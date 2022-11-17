#include "binary_trees.h"

/**
 * binary_tree_ancestor - finds lowest common ancestor of two nodes in binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size or 0 if tree is NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    binary_tree_t *temp;

    if (!first || !second)
        return (NULL);
    temp = (binary_tree_t *)second->parent;
    while (first)
    {
        while (second)
        {
            if (second == first)
                return ((binary_tree_t *)first);
            second = second->parent;
        }
        second = temp;
        first = first->parent;
    }
    return (NULL);
}