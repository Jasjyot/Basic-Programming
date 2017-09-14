/*Demonstration of use of malloc(),calloc() and realloc() in c++ for dynamic memory allocation*/


#include<iostream>
using namespace std;
int main()
{
    int * arr=(int *)malloc(10*sizeof(int));
    int *brr=(int *)calloc(10,sizeof(int));

    cout<<"Program to demonstrate the difference between calloc(), malloc() and realloc().\nMALLOC():\n" ;
    for(int i=0;i<10;i++)
    {
        cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
    }
    cout<<"CALLOC():\n" ;
    for(int i=0;i<10;i++)
    {
        cout<<"brr["<<i<<"]: "<<brr[i]<<endl;
    }
    cout<<"REALLOC():\n" ;

    arr=(int*)realloc(arr,11*sizeof(int));
    for(int i=0;i<11;i++)
    {
        cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
    }

    return 0;
}
