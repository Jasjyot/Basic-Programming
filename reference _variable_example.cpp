// Example of a reference variable

#include <iostream>
using namespace std;
void update(int &z)
{
    z++;
}

int main() {
    int x=10;
    int &y=x;
    
    update(x);
    update(y);
    
    cout<<x<<" "<<y;
}
