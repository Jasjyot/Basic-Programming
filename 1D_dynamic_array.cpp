// 1D Dynamic Array
#include <iostream>
using namespace std;
int main() {
    int rows;
    cin>>rows;
    
    //Allocation
    int *a = new int[rows]; 
    for(int i=0;i<rows;i++)
    {
        cin>>a[i];
    }

    for(int j=0;j<rows;j++)
    {
        cout<<a[j]<<" ";
    }    
    
    //Destroy
    delete [] a;
    cout<<"\nHeap Memory space is now free! ";
    return 0;
}
