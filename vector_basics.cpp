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
    vector<int> v1={1,2,3,4};
    vector<int> v2={5,6,7,8,9};
    
    v1.swap(v2);
    
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    
    
    cout<<"\n\n\n\n";
    
    
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
