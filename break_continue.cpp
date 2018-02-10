#include <iostream>
using namespace std;
int main() {
  
  cout<<"Using break statement to print [20,7):\n";
  int i=21;
  
  while(i>0)
  {
      i--;
      if(i==7)
      {
          break;
      }
      cout<<i<<endl;
      
  }
  
  
  cout<<"Using continue statement to print [20,0]-{7}: \n";
  int j=21;
  while(j>0)
  {
      j--;
      if(j==7)
      {
          continue;
      }
      cout<<j<<endl;
  }
  
  return 0;
  
}
