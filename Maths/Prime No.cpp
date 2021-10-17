#include<bits/stdc++.h>
#include<cmath>
using namespace std;

bool isPrime(long long n)
{
    
    if(n == 1)
    return false;
    
    if(n == 2)
    return true;
    
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        return false;
    }
    return true;
}


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long n;
        cin>>n;
        
        if(isPrime(n))
        cout<<"yes\n";
        else
        cout<<"no\n";
    }
}
