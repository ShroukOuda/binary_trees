#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: height of tree, 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right)
		return (1 + binary_tree_height(tree->left));
	if (!tree->left)
		return (1 + binary_tree_height(tree->right));
	return (1 + MIN(binary_tree_height(tree->left),
				binary_tree_height(tree->right)));
}
