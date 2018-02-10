#include <iostream>
using namespace std;
int main() {
    int a=10;
    
    
    
    cout<<a++<<endl;
    //cout<<a++;   ----------> In order (cout<<a; a++;)
    
    
    
    cout<<++a;
    //cout<<a++;   ----------> In order (a++; cout<<a;)
    return 0;
}
