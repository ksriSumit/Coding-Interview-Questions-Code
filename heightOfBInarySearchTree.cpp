/*
Height of a binary search tree is the number of edges between root node and the farthest leaf node of the tree.
Here, we will make use of recursion to find the height of the tree.
When we reach the leaf node, the function will return -1 because the height of the leaf node is zero.
And to make the height of the leaf node zero, it should return -1.
The code to calculate the Height of the root node is given below:
*/

int getHeight(Node *root)
{
	if(root==NULL) return -1;
	else return (max(root->left,root->right))+1;
}
