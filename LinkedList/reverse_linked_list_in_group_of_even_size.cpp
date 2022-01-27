#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

class Solution
{
    public:
    node *reversek(node *head,int k)
    {
        if(head==NULL)
        return NULL;
        node *curr=head;
        node *prev=NULL;
        int count=0;
        while(curr!=NULL && count<k)
        {
            node *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        
        if(curr!=NULL)
        {
            node *rest_head=reversek(curr,k);
            head->next=rest_head;
        }
        return prev;
    }
    
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        return reversek(head,k);
    }
};

int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}
