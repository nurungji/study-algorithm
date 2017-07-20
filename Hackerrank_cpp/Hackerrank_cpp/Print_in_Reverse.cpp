#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};


void ReversePrint(Node *head)
{
	Node *cur = head;
	int arr[100000];
	int size = 0;	

	for (int i = 0; cur != NULL; i++)
	{
		arr[i] = cur->data;
		cur = cur->next;
		size++;
	}

	for (int i = (size - 1); i >= 0; i--)
		cout << arr[i] << endl;;
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

	ReversePrint(head);

	return 0;
}