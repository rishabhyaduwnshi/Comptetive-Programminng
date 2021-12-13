#include<bits/stdc++.h>
using namespace std;


bool areDigitsPrime(int x)
{
    bool array[10];
    
    for(int i=0;i<10;i++)
    array[i] = false;
    
    array[2] = true;
    array[3] = true;
    array[5] = true;
    array[7] = true;
    
    int rem;
    
    
    while(x != 0)
    {
        rem = x%10;
        if(array[rem] == false)
        return false;
        x = x/10;
    }
    
    return true;
}

bool prime(int n)
{
    if(n==1 || n==0)
    return false;
    if(n==2)
    return true;
    
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    
    if(areDigitsPrime(n))
    return true;
    
    
    return false;
}

int main()
{
    for(int i=0;i<=1000;i++)
    {
        if(prime(i))
        cout<<i<<" ";
    }
}
