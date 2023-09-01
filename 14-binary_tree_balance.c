#include "binary_trees.h"
/**
 * binary_tree_balance - A function that measures the balance
 * factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: if NULL return 0, else return balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
/**
 * binary_tree_height -  A function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left_h = 0, right_h = 0;

	if (tree)
	{
		left_h = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right_h = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((left_h > right_h) ? left_h : right_h);
	}
	return (0);
}
