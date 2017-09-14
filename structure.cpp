#include<iostream>
using namespace std;

struct Book
{
    string title;
    string author;
    string subject;
    short id;
};
void display(Book);

void display(Book obj)
{
    cout<<obj.title<<endl;
    cout<<obj.author<<endl;
    cout<<obj.subject<<endl;
    cout<<obj.id<<endl;
}

int main()
{
    Book obj;
    obj.title="Let Us C++";
    obj.author="Yashvant Kanetkar";
    obj.subject="C++ programming";
    obj.id=32;
    display(obj);
    return 0;
}
