#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    
    //Constructor
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

int main() 
{
    node n1(10);
    node * head= &n1;
    
    node n2(26);
    n1.next=&n2;
    
    node n3(32);
    n2.next=&n3;
    node * tail=&n3;
    
    
    //add node to L.L
    int data4=27;
    node n4(data4);
    (*tail).next = &n4;
    
    // print L.L
    node * ptr=head;
    int i=1;
    while(ptr!=NULL)
    {
        cout<<"Node "<<i++<<" - data: ";
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }

    //delete node from L.L via searching    
    int key=6;
    ptr=head;
    while(ptr->next!=NULL)
    {
        if((ptr->next)->data==key)
        {
            ptr->next=(ptr->next)->next;
            break;
        }
        ptr=ptr->next;
    }
    cout<<endl;
    // print L.L
    ptr=head;
    i=1;
    while(ptr!=NULL)
    {
        cout<<"Node "<<i++<<" - data: ";
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    
    return 0;
}
