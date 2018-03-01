
// Global scope resolution operator (::)

#include <iostream>
using namespace std;
int x=10; //global variable


int main() {
    
    int x=1000 ;
    cout<<"x= "<<x<<endl;
    cout<<"x= "<<::x<<endl;
    ::x=::x+2;
    cout<<"x= "<<::x;    
    return 0;
}
