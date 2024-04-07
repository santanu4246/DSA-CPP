#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};

class Solution
{
    public:
Node* reverse(Node *head)
{
    Node* temp = head;
    Node* back = nullptr;
    while(temp)
    {
        Node* front = temp->next;
        temp->next = back;
        back = temp;
        temp = front;
    }
    return back;
}

Node* merge(Node* h1, Node* h2)
{
    Node* dumynode = new Node(0);
    Node* current = dumynode;

    while(h1 && h2)
    {
        if(h1->data < h2->data)
        {
            current->next = h1;
            h1 = h1->next;
        }
        else{
            current->next = h2;
            h2 = h2->next;
        }
    }
    if(h1)
    {
        current->next = h1;
    }
    else{
        current->next = h2;
    }
    return dumynode->next;
}
    // your task is to complete this function
    void sort(Node **head)
    {
         // Code here
         Node* h1 = new Node(0);
         Node* h2 = new Node(0);
        
        Node* h1temp = h1;
        Node* h2temp = h2;

         Node* temp = *head;

            int cnt = 0;
         while(temp)
         {
            if(cnt % 2 == 0)
            {
                h1temp->next = temp;
                h1temp = h1temp->next;
            }
            else
            {
                h2temp->next = temp;
                h2temp = h1temp->next;
            }
            temp = temp->next;
            cnt++;
         }
         h1temp->next = nullptr;
         h2temp->next = nullptr;
         h2->next = reverse(h2->next);
         *head = merge(h1->next,h2->next);
    }
};
int main(){
    return 0;
}