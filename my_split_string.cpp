#include <iostream>
using namespace std;
void mySplit(string str, char ch)
{
    int index=0;
    int len=str.length();
    for(int i=index;i<len;i++)
    {
        if(str[i]!=ch)
        {
            cout<<str[i];
        }
        else if(str[i]==ch)
        {
            cout<<endl;
        }
    }
}


int main() {
    mySplit("Hello World! A new era.",' ');
    return 0;
}
