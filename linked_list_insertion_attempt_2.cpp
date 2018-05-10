#include <iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node * next;
    
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};

// aproach if multiple linked lists have to be created at the same time
/*
class LinkedList
{
    Node * head;
    Node * tail;
    
    public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void insert()
    {
        
    }
};
*/

//changes should reflect in main. Use &, pass by refernce.
void insertAtHead(Node * &head, int data)
{
    Node*n=new Node(data);
    // Node *n .... dynamic memory allocation
    // the object persists even after function is over
    // Node n.....static memory allocation. The object also gets destroyed after function execution.
    n->next=head;
    head=n;
}

//changes should not reflect in main. Use pass by value.
void print(Node * head)
{
    Node * temp= head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    
}

int main()
{
    Node * head=NULL;
    Node * tail=NULL;
    
    insertAtHead(head,5);
    insertAtHead(head,3);
    insertAtHead(head,65);
    insertAtHead(head,66);
    insertAtHead(head,68);
    
    print(head);
    
    
    return 0;    
}
