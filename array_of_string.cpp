#include <iostream>
using namespace std;
int main() {
    char a[10][100];
    
    // You want to take input n strings.
    int n;
    cin>>n;
    cin.ignore();
    
    for(int i=0;i<n;i++)
    {
        cin.getline(a[i],100);
    }
        
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<endl;
    }
    
    
    return 0;
}
