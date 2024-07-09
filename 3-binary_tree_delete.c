#include "binary_trees.h"
/**
 * binary_tree_delete - check the code.
 * @tree: is a pointer to the root node of the tree to delete
 * Return: no return
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
