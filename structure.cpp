#include<iostream>
using namespace std;

void display(struct Book);
void display(struct Book*);
struct Book
{
    string title;
    string author;
    string subject;
    short id;
};

int main()
{
    struct Book obj;
    obj.title="Let Us C++";
    obj.author="Yashvant Kanetkar";
    obj.subject="C++ programming";
    obj.id=32;
    display(obj);
    cout<<endl;
    display(&obj);
    return 0;
}

void display(struct Book obj)
{
    cout<<obj.title<<endl;
    cout<<obj.author<<endl;
    cout<<obj.subject<<endl;
    cout<<obj.id<<endl;
}
void display(struct Book * pointer)
{
    cout<<pointer->title<<endl;
    cout<<pointer->author<<endl;
    cout<<pointer->subject<<endl;
    cout<<pointer->id<<endl;
}

