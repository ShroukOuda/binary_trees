#include "binary_trees.h"
size_t Depth(const binary_tree_t *tree);
/**
 * binary_tree_depth - a function that measures the depth of 
 *                     a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: depth of node or 0 if tree is null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (Depth(tree));
}
size_t Depth(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	return (1 + Depth(tree->parent));
}
