/*
Level order traversal of the binary tree. The idea here is to use queue data structure.
The code for the level order traversal of the binary tree is given below.
First we create queue data structure of type Node* using C++ STL. Then we will pop out the root node. Print it and push its both children
in the queue. We will reapt the above step until the queue is empty.
*/

void levelOrderTraversal(Node *root)
{
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		Node *curr = q.front();
		q.pop();
		cout<<q->data<" ";
		if(curr->left)
		q.push(curr->left);
		if(curr->right)
		q.push(curr->right);
	}
}
