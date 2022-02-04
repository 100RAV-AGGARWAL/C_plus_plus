#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

class Solution
{
    public:
    struct Node* reverse(Node* head)
    {
        Node *cur = head;
        Node *prev = NULL;
        while(cur != NULL)
        {
            Node *t = cur->next;
            cur->next = prev;
            prev = cur;
            cur = t;
        }
        
        return prev;
    }
    
    int length(Node *head) {
        int len = 0;
        while(head != NULL) {
            len++;
            head = head->next;
        }
        return len;
    }
    
    struct Node* add(struct Node* first, struct Node* second) {
        int carry = 0;
        Node *head = first;
        
        while(first != NULL) {
            int sum = 0;
            
            if(second != NULL) {
                sum = first->data + second->data + carry;
            } else {
                sum = first->data + carry;
            }
            
            if(sum >= 10) {
                carry = sum/10;
                first->data = sum%10;
            } else {
                carry = 0;
                first->data = sum;
            }
            
            first = first->next;
            
            if(second != NULL) second = second->next;
        }
        
        if(carry > 0) {
            Node *n = new Node(carry);
            head = reverse(head);
            n->next = head;
            return n;
        }
        
        return reverse(head);
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = reverse(first);
        second = reverse(second);
        
        if(length(first) > length(second)) return add(first, second);
        else return add(second, first);
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}