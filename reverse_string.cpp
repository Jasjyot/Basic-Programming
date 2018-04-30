//write a function to reverse string

#include <iostream>
using namespace std;

string reverseString(string str)
{
    int len=str.length();
    string strR;
    for(int i=len-1;i>-1;i--)
    {
        strR=strR+str[i];    
    }
    return strR;
}

int main() {
    string str="Hello World!";
    cout<<reverseString(str);
    return 0;
}
