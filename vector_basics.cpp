#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// sort in descnding order
bool compare(int a, int b)
{
    return a>b;
}


int main() 
{
    vector<int> v;
    v.reserve(100);
    int n,temp;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);    
    }
    
    
    for(int j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end(),compare);
    
    
    // v.clear();
    for(int j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
    cout<<endl;
    cout<<"Capacity of vector = "<<v.capacity()<<endl;
    
    cout<<v.max_size()<<endl;
    return 0;
}
