#include<bits/stdc++.h>
using namespace std;

//This code helps when we have to multiply two bigger numbers greater than 10e8+7 and we have to take mod


long long MoD = 10e9+7;

long long binaryMultiply(long long base, long long exponent)
{
    long long ans = 0;
    while(exponent != 0)
    {
        if(exponent & 1)
        {
            ans = (ans+base)%MoD;
        }
        
        base = (base+base)%MoD;
        exponent = exponent>>1;
    }
    
    cout<<ans;
    return 0;
    
}


int main()
{
    binaryMultiply(10,20);
}
