// String linear search
#include <iostream>
#include <cstring>
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
    
        
    char key[100];
    cin.getline(key,100,'\n');
    
    int j;
    for(j=0;j<n;j++)
    {
        if(strcmp(a[j],key)==0)
        {
            cout<<"String is found at index: "<<j<<endl;        
            break;
        }
    }
    if(j==n)
    {
        cout<<"String not found!";
    }
    return 0;
}
