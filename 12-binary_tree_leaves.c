#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree
 *        to count the number of leaves
 * Return: no of leaves nodes, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t cnt = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		cnt++;
	if (tree->left)
		binary_tree_leaves(tree->left);
	if (tree->right)
		binary_tree_leaves(tree->right);
	return (cnt);
}
