#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    // sum of 1.....n using while loop in cpp :)
    
    if(n%2!=0)
    {
        n--;
    }
    
    int sum=0;
    while(n>0)
    {
        
        sum+=n;    
        n-=2;
    }
    cout<<"sum of 1.....n using while loop in cpp :) "<<sum;
    return 1;
}
