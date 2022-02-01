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

void print(Node *root)
{
	Node *temp = root;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}

class Solution
{
public:
	Node *removeDuplicates(Node *head)
	{
		unordered_map<int, int> mp;

		if(head == NULL || head->next == NULL) return head;
		mp[head->data]++;

		Node *prev = head, *curr = head->next;

		while(curr != NULL) {
			if(mp.count(curr->data) > 0) {
				prev->next = curr->next;
				curr = curr->next;
			} else {
				mp[curr->data]++;
				curr = curr->next;
				prev = curr;
			}
		}
		return head;
	}
};

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int K;
		cin >> K;
		struct Node *head = NULL;
		struct Node *temp = head;

		for (int i = 0; i < K; i++)
		{
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		Solution ob;
		Node *result = ob.removeDuplicates(head);
		print(result);
		cout << endl;
	}
	return 0;
}