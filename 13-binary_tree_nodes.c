#include "binary_trees.h"
/**
 * binary_tree_nodes - A function that count the nodes with at
 * least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to counter the number of nodes
 * Return: If NULL, return 0, else node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree)
	{
		counter += (tree->left || tree->right) ? 1 : 0;
		counter += binary_tree_nodes(tree->left);
		counter += binary_tree_nodes(tree->right);
	}
	return (counter);
}
