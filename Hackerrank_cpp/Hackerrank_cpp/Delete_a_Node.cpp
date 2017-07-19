#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

Node* Delete(Node *head, int position)
{
	if (head == NULL)
		return head;

	if (position == 0)
		return head = head->next;

	Node* forward = NULL;
	Node* current = head;
	for (int i = 0; i <= (position - 1); i++)
	{
		forward = current;
		current = current->next;
	}

	forward->next = current->next;
	return head;
}

int main()
{
	Node* head = new Node();
	head->data = 1;
	Node* head1 = new Node();
	head1->data = 2;
	head->next = head1;
	Node* head2 = new Node();
	head2->data = 3;
	head2->next = NULL;
	head1->next = head2;

	Delete(head, 1);

	return 0;
}