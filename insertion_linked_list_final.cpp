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
int findLinkedLength(Node * head)
{
    int len=0;
    while(head!=NULL)
    {
        head=head->next;
        len++;
    }
    return len;
}

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

void insertAtTail(Node * &head , int data)
{
    if(head==NULL)
    {
        head= new Node(data);
        return;
    }
    Node * temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;        
    }
    temp->next=new Node(data);
    return;
}

void insertAtMiddle(Node *&head, int data, int posAfter)
{
    if(head==NULL||posAfter==0)
    {
        insertAtHead(head,data);
    }
    else if(posAfter>=findLinkedLength(head))
    {
        insertAtTail(head,data);
    }
    //Insert ai Middle
    else
    {
        Node *n= new Node(data);
        Node * temp= head ;
        while(posAfter>1)
        {
            temp=temp->next;
            posAfter--;
        }
        n->next=temp->next;
        temp->next=n;
    }
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
    
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtTail(head,6);
    insertAtMiddle(head,2,3);
    
    print(head);
    
    
    return 0;    
}
