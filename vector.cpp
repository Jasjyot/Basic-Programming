/* Demonstration of one of the core components of C++ STL i.e vector. 
All the popular and commonly used functionalities are illustrated: */

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    cout<<"The size of vector is:"<<vec.size()<<endl;

    for(int i=0;i<7;i++)
    {
        vec.push_back(i);
    }

    cout<<"Extended vector size="<<vec.size()<<endl;

    vector<int>:: iterator v=vec.begin();
    while(v!=vec.end())
    {
        cout<<"Value at v :"<<*v<<endl;
        v++;
    }

    for(int i=0;i<3;i++)
    {
        vec.pop_back();
    }

    cout<<"Current vector size="<<vec.size()<<endl;

    v=vec.begin();
    while(v!=vec.end())
    {
        cout<<"Value at v :"<<*v<<endl;
        v++;
    }
return 0;
}
