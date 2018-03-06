// Time Complexity = O(n^2)



#include <iostream>
using namespace std;
void selectionSort(int arr[], int n);
void selectionSort(int arr[], int n)
{
    int min,j,t;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        t=arr[min];
        arr[min]=arr[i];
        arr[i]=t;
    }
}


int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
