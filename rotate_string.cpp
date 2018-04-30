//write a function to rotate string

#include <iostream>
using namespace std;

string rotateString(string str, int n)
{
    int len=str.length();
    string strR;
    
    n=n%len;
    for(int i=len-n;i<len;i++)
    {
        strR=strR+str[i];
    }
    for(int j=0;j<len-n;j++)
    {
        strR=strR+str[j];    
    }
    
    return strR;
}

int main() {
    int n;
    string str;
    getline(cin,str);
    cin>>n;
    cout<<rotateString(str,n);
    return 0;
}
