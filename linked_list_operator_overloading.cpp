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

void insertInMiddle(Node *&head, int data, int posAfter)
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

bool searchRecursive(Node*head,int key)
{
    if(head!=NULL)
    {
        if(head->data==key)
        {
            return true;
        }
        return searchRecursive(head->next, key);
    }
    return false;
}
bool searchIterative(Node*head, int key)
{
    while(head!=NULL)
    {
        if(head->data==key)
        {
            return true;
        }
        head=head->next;
    }
    return false;
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
    cout<<endl;
}
void deleteAtHead(Node *& head)
{//'delete' takes operand as the memory address which has to be deleted
    //delete temp where temp=NULL is not an error
    //delete NULL is an eroor
    if(head!=NULL)
    {
        Node* temp=head;
        head=head->next;
        delete temp;
        return;        
    }
    return;
}

void deleteAtTail(Node *&head)
{   Node * tempHead=head;
    if (head!=NULL && head->next!=NULL)
    {
        while((tempHead->next)->next!=NULL)
        {
            tempHead=tempHead->next;
        }
        Node * temp=tempHead->next;
        tempHead->next=NULL;
        delete temp;
        return;
    }
    else if (head!=NULL)
    {
        delete head;
        head = NULL;
    }
    return;
}
void deleteInMiddle(Node * &head, int pos)
{
    if(pos>0)
    {
        if(findLinkedLength(head)==pos)
        {
            deleteAtTail(head);
            return;
        }
        else if (pos==1)
        {
            deleteAtHead(head);
            return;
        }
        else if(pos<findLinkedLength(head))
        {
            Node * temp=head;
            while(pos>2)
            {
                temp=temp->next;
                pos--;
            }
            Node*dTemp=temp->next;
            temp->next=dTemp->next;
            delete dTemp;
            return;
        }
    }
    return;
}
void buildList(Node *&head)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        insertAtTail(head,data);
        cin>>data;
    }
    return;
}

// return type istrea& for cascading
istream& operator>>(istream &is, Node *& head)
{
 buildList(head); 
 return is;
}

ostream& operator<<(ostream &os, Node * head)
{
 print(head);
 return os;
}


int main()
{
    Node * head=NULL;
    Node * head2=NULL;
    cin>>head;
    cin>>head2;
    
    cout<<head;
    cout<<head2;
    // buildList(head);
    // print(head);
    
    
    /*
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtTail(head,6);
    insertInMiddle(head,2,3);
    
    print(head);
    */
    /*
    if(searchRecursive(head,6))
    {
        cout<<"recursiveSearch: Element is present"<<endl;
    }
    else
    {
        cout<<"recursiveSearch: Element is not present"<<endl;
    }
    
    if(searchIterative(head,5))
    {
        cout<<"iterativeSearch: Element is present"<<endl;
    }
    else
    {
        cout<<"iterativeSearch: Element is not present"<<endl;
    }
    
    */
    
    /*
    deleteInMiddle(head,3);
    print(head);
    deleteAtTail(head);
    print(head);
    deleteAtHead(head);
    print(head);
    deleteInMiddle(head,2);
    print(head);
    */
    
    return 0;    
}
