#include<iostream>
using namespace std;
int top=-1;

void push(int stack[] ,int x ,int n)
{
    if(top==n-1)
    {
        cout<<"Stack is full. Overflow condition\n";
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

bool isEmpty()
{
    if(top==-1)
    {
        return true;
    }    
    return false;
}

void pop()
{
 if(isEmpty())
 {
     cout<<"Stack is Empty. Underflow Condition\n";
 }
 else
 {
     top--;
 }
}
 int size()
 {
     return top+1 ;
 }

 int topElement(int stack[])
 {
     return stack[top];
 }

int main()
{
    int stack[3];
    push(stack,5,3);

    cout<<"Current size of stack: "<<size()<<endl;
    push(stack,10,3);
    push(stack,24,3);

    cout<<"Current size of stack: "<<size()<<endl;
    push(stack,23,3);

    cout<<"The current top element of stack is:"<<topElement(stack)<<endl;

    for(int i=0;i<3;i++)
     {
       pop();
     }
    cout<<"Current size of stack: "<<size()<<endl;
    pop();

    return 1;
}