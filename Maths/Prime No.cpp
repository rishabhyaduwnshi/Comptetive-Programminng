#include<bits/stdc++.h>
#include<cmath>
using namespace std;


bool isPrime(int n)
{
    if(n == 0 || n == 1)
    return false;
    
    if(n == 2 || n == 3)
    return true;
    
    if(n%2 == 0 || n%3 == 0)
    return false;
    
    for(int i=5; i*i<=n; i=i+6) //we increment in terms of 6 because most prime number are in pattern of 6n-1 or 6n+1
    if(n%i == 0 || n%(i+2) == 0)
    return false;
    
    return true;

}


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
