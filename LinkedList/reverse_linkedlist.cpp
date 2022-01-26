#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;

	Node(int d)
	{
		this->data = d;
		this->next = NULL;
	}
};

class LinkedList
{
public:
	Node *head;

	LinkedList()
	{
		head = NULL;
	}

	void insert(int data)
	{
		Node *newNode = new Node(data);

		if (head == NULL)
		{
			head = newNode;
		}
		else
		{
			newNode->next = head;
			head = newNode;
		}
	}

	void reverseIterative()
	{
		if (head == NULL)
			return;

		Node *curr = head, *prev = NULL, *next = NULL;

		while (curr != NULL)
		{
			next = curr->next;
			curr->next = prev;

			prev = curr;
			curr = next;
		}
		head = prev;
	}

	Node* reverseRecursive(Node *head) {
		if(head == NULL || head->next == NULL) {
			return head;
		}

		Node *further = reverseRecursive(head->next);
		head->next->next = head;
		head->next = NULL;

		return further;
	}

	void print()
	{
		Node *temp = head;

		while (temp != NULL)
		{
			cout << temp->data;

			if (temp->next != NULL)
			{
				cout << "->";
			}
			temp = temp->next;
		}
	}
};

int main()
{
	int choice = 0;
	LinkedList ll;

	cout << "Enter your choice:\n1.Insertion\n2.Reverse Iterative\n3.Reverse Recursive\n4.Display\n";
	do
	{
		cin >> choice;

		if (choice == 1)
		{
			int d;
			cin >> d;
			ll.insert(d);
		}
		else if (choice == 2)
		{
			ll.reverseIterative();
		} 
		else if(choice == 3)
		{
			ll.head = ll.reverseRecursive(ll.head);
		}
		else if (choice == 4)
		{
			ll.print();
			cout << endl;
		}
		else
		{
			break;
		}
	} while (choice >= 1 && choice <= 3);

	return 0;
}