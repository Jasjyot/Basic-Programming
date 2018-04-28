// Modified prime checkPrime
// requires 0.5*sqrt(n) steps to check if n is prime or not ?


#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    if(n%2==0)
    {
        return true;
    }
    
    for(int i=3; i*i<=n ; i=i+2)
    {
        if(n%i==0)
        {
            return true;
        }
    }
    
    return false;
    
}

int main() 
{
    int n;
    cin>>n;
    int flag=0;
  
    if(checkPrime(n))
    {
        cout<<n<<" is not a prime number! ";
    }
    else
    {
        cout<<n<<" is a prime number! ";
    }
    
    
    
    return 0;
}
