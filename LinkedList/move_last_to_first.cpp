#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
};

void moveToFront(Node **head_ref)
{
	Node *temp = *head_ref, *prev = NULL;

	while(temp->next != NULL) {
		prev = temp;
		temp = temp->next;
	}

	temp->next = (*head_ref);
	*head_ref = temp;
	prev->next = NULL;
}

void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void printList(Node *node)
{
	while(node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
}

int main()
{
	Node *start = NULL;

	push(&start, 5);
	push(&start, 4);
	push(&start, 3);
	push(&start, 2);
	push(&start, 1);

	cout<<"Linked list before moving last to front\n";
	printList(start);

	moveToFront(&start);

	cout<<"\nLinked list after removing last to front\n";
	printList(start);

	return 0;
}
