#include <iostream>
using namespace std;
int main() {
   string str;
   
   // sizeof() always returns memory space in bytes
   cout<<"int : "<<sizeof(int)<<endl;
   cout<<"short : "<<sizeof(short int)<<endl;
   cout<<"long int : "<<sizeof(long int)<<endl;
   cout<<"long long int : "<<sizeof(long long int)<<endl;
   cout<<"float : "<<sizeof(float)<<endl;
   cout<<"double : "<<sizeof(double)<<endl;
   cout<<"char : "<<sizeof(char)<<endl;
   cout<<"bool : "<<sizeof(bool)<<endl;
   cout<<"string : "<<sizeof(str)<<endl;// size of string varies drastically from one complier to other even for same system architecture 
}
