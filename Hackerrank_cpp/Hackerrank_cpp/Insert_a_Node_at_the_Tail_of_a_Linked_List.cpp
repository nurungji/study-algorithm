#include <iostream>

using namespace std;

struct Node {
	int data;
	struct Node *next;
};

Node* Insert(Node *head, int data)
{
	Node *temp = new Node();
	temp->data = data;
	temp->next = NULL;
	
	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		Node *current = head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
	}
	return head;
}

int main() 
{

	return 0;
}