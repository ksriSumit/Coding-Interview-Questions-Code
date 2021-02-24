/*
Remove duplicates from a sorted linked list.
The code here is two pointer approach.
The code is given below
*/

Node *removeDuplicatesSorted(Node *root)
{
	Node *curr = root;
	Node *next = NULL;
	while(curr->next!=NULL)
	{
		if(curr->data==curr->next->data)
		{
			next = curr->next->next;
			delete(curr->next);
			curr->next = next;
		}
		else curr = curr->next;
	}
}
