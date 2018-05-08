#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str[]="Hi, Givein all you got!";
    char * ptr;
    
    ptr=strtok(str,"i");
    
    while(ptr!=NULL)
    {
        cout<<ptr<<endl;
        ptr=strtok(NULL,"i ");
    }
    
    return 0;
}
