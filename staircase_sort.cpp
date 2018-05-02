//Staircase search

#include <iostream>
#include <sstream>
using namespace std;

string search(int arr[][4],int R,int C, int element)
{
    int i=0,j=C-1;
    string str;
    
    while(element != arr[i][j])
    {
        if(element<arr[i][j])
        {
            j--;
        }
        else
        {
            i++;    
        }
    }
    
    str="Element found at i= "+to_string(i)+", j= "+to_string(j);
    return str;
}



int main() {
    
    int arr[][4]={
      {1,2,3,4},
      {5,8,10,11},
      {12,14,15,18},
      {16,17,20,22}
    };
    //
   
    cout<<search(arr,4,4,17); 
    
    return 0;
}
