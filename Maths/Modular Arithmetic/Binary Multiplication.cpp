#include<bits/stdc++.h>
using namespace std;

//This code can be used to multiply a, b times and take MoD. Here a and MoD can be very large.


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
