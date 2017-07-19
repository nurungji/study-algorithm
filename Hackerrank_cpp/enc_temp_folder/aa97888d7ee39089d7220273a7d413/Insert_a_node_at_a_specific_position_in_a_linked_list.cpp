#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node *next;
};

Node* InsertNth(Node *head, int data, int position)
{
	Node *temp = new Node();
	temp->data = data;
	temp->next = NULL;
		
	//if (head == NULL)
	//{
	//	head = temp;
	//	return head;
	//}

	Node *current = head;
	//if (position == 0)
	//{
	//	temp->next = current;
	//	current = temp;		
	//	return current;
	//}
	
	for (int idx = 0; idx < (position - 1); idx++) {
		current = current->next;
	}
	temp->next = current->next;
	current->next = temp;
		
	return head;
}

int main() {
	Node* head = new Node();
	head = NULL;

	head = InsertNth(head, 1, 0);
	head = InsertNth(head, 2, 0);
	head = InsertNth(head, 3, 1);
	head = InsertNth(head, 4, 3);
	return 0;
}