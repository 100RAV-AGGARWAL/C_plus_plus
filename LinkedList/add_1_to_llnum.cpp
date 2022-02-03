#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;

	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

void printList(Node *node)
{
	while (node != NULL)
	{
		cout << node->data;
		node = node->next;
	}
	cout << "\n";
}

class Solution
{
public:
	int util(Node *head)
	{
		if (head == NULL)
		{
			return 1;
		}

		int carry = util(head->next);

		head->data += carry;

		if (head->data == 10)
		{
			head->data = 0;
			return 1;
		}

		return 0;
	}

	Node *addOne(Node *head)
	{
		if (util(head) == 1)
		{
			Node *temp = new Node(1);
			temp->next = head;
			head = temp;
		}

		return head;
	}
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;

		Node *head = new Node(s[0] - '0');
		Node *tail = head;
		for (int i = 1; i < s.size(); i++)
		{
			tail->next = new Node(s[i] - '0');
			tail = tail->next;
		}
		Solution ob;
		head = ob.addOne(head);
		printList(head);
	}
	return 0;
}
