//Complexity= O(N.LogLog(N)) ~ O(N.k)


#include <iostream>
using namespace std;
bool * printPrimeTill()
{
    static bool prime[10000];
    
    for(int i=0;i<10000;i++)
    {
        prime[i]=true;   //assuming every number is prime
    }
    
    for(int j=2*2;j<10000;j=j+2)
        {
            prime[j]=false;
        }
        
    
    for(int i=3;i<10000;i+=2)
    {
        if(prime[i])
        {
            for(int j=i*i;j<10000;j=j+i)
            {
                prime[j]=false;
            }
        }
    }
    return prime ;
}


int main() {
    // print primes till 10,000
    bool *prime = printPrimeTill();
    
    for(int i=2;i<10000;i++)
    {
        if(prime[i])
        {
            cout<<i<<endl;
        }
    }
    
    return 0;
}
