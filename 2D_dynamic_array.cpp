// 2D Dynamic Array

/* 

Static Array:
    *No of enteries in general static array: 10^7:global array , 10^6:local array ;
    *Memory is allocated from stack
    *Memory get deleted automatically after program ends.

Dynamic Array:
Two benefits of using 'new' keyword':
    // Uses Heap Memory
    * No of enteries in array= 10^8
    * Memory does not get deleted automatically after program ends.
    * The array can be stored in a static pointer which can be used by some other function as required. 

This does not work when n is very large:
    // wrong way of doing it.
    int n;
    cin>>n;
    int arr[n];
    // directly use a[1000];
*/

#include <iostream>
using namespace std;
int main() 
{
    int rows,cols;
    cin>>rows>>cols;
    //Allocation
    int **a = new int*[rows]; 
    for(int i=0;i<rows;i++)
    {
        a[i] = new int[cols];
    }
    //Destroy
    for(int i=0;i<rows;i++)
    {
        delete [] a[i];
    }
    delete [] a;    
    return 0;
}
