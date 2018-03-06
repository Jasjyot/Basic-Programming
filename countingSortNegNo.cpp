#include <iostream>
#include <algorithm>
using namespace std;

void countingSort(int arr[], int n)
{
    int min=*min_element(arr,arr+n);
    
    if(min<0){
        for(int i=0;i<n;i++)
        {
            arr[i]-=min;
        }
    }
    
    int max=*max_element(arr,arr+n);
    int freq[max+1]={0};
    
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    
    for(int i=0,j=0 ; (i<max+1 && j<n) ;i++)
    {
        while(freq[i]!=0)
        {
            arr[j]=i;
            j++;
            freq[i]--;
        }
    }
    
    if(min<0){
    for(int i=0;i<n;i++)
        {
            arr[i]+=min;
        }
    }
}


int main() 
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];        
    }
    
    countingSort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;        
    }
    
    return 0;
}
