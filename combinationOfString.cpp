/* Generate all possible combinations from letters of given string */

#include <iostream>
using namespace std;
int main() {
   
   string str,combi;
   cin>>str;
   int len=str.length();
   
   int i=0,flag=0,d=0;
   while(i!=((1<<len)))
   {
       d=0;
       int tempi=i;
       do
       {    
            flag = tempi&1;
            if(flag)
           {
            combi=str[len-d-1]+combi;   
           }
            tempi=tempi>>1;
            d++;
       }
       while(tempi);
           
           
       cout<<i<<" : "<<combi<<endl;
       combi="";
       i++;
   }
   
   
   return 0;
}
