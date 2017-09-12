#include<iostream>
using namespace std;
void initialize(bool A[10][10]);
void display(bool A[10][10],int);

int main()
{
    int a,b,nodes,edges;
    cin>>nodes;
    cin>>edges;
    bool A[10][10];
    initialize(A);
    for(int i=0;i<edges;i++)
    {
        cin>>a>>b;
        A[--a][--b]=true;
    }
    cout<<"The adjacency matrix for the provided "<<nodes<<" noded "<<edges<<" edged graph is:\n";
    display(A,nodes);
    return 0;
}

void display(bool A[10][10],int nodes)
{
    for(int j=0;j<nodes;j++)
    {
        for(int i=0;i<nodes;i++)
        {
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }
}

void initialize(bool A[10][10])
{
    for(int i=0;i<10;++i)
    {
        for(int j=0;j<10;++j)
        {
            A[i][j]=false;
        }
    }    
}