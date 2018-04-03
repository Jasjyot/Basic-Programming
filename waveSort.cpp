#include <iostream>
using namespace std;
void waveSort(int n, int brr[]);
void waveSort(int n, int brr[])
{
    if(n)
    {
        //98 -1 0 215 36
        int j;
        
        if(!(brr[0]>=brr[1]))
        {
            int t=brr[0];
            brr[0]=brr[1];
            brr[1]=t;
        }
        
        
        for(int i=2;i<n-1;i=i+2)
        {
            j=i-1;
            if(!(brr[j]<=brr[i]))
            {
                //swap(i,j);
                int t=brr[j];
                brr[j]=brr[i];
                brr[i]=t;
            }
            
            j=i+1;
            if(!(brr[j]<=brr[i]))
            {
                //swap(i,j);
                int t=brr[j];
                brr[j]=brr[i];
                brr[i]=t;
            }
        }
        if((n-1)%2==0)
        {
            if(!(brr[n-1]>=brr[n-2]))
            {
                int t=brr[n-1];
                brr[n-1]=brr[n-2];
                brr[n-2]=t;
            }
        }
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
    waveSort(n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;    
}
