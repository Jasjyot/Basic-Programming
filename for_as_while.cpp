#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1,sum=0;
    for(;i<(n+1) ; )
    {
        sum+=i;
        i++;
    }
    
    
    cout<<"Sum of first n integers using for loop as while loop: "<<sum;
    return 0;
}
