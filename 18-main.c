#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/* Our own functions */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);
void binary_tree_delete(binary_tree_t *tree);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        binary_tree_t *root;
        binary_tree_t *node;
        binary_tree_t *uncle;

        root = binary_tree_node(NULL, 70);

        node = root;
        uncle = binary_tree_uncle(node);
        if (uncle)
                printf("Uncle of (%d) is (%d)\n", node->n, uncle->n);
        else
                printf("Uncle of (%d) is (%p)\n", node->n, (void *)uncle);

        binary_tree_print(root);
        binary_tree_delete(root);
        return (0);
}
