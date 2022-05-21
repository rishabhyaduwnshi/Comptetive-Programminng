#include<bits/stdc++.h>
using namespace std;


void binaryExponentiation(int base, int exponent)
{
    long long result = 1;
    while(exponent != 0)
    {
        if(exponent & 1)
        {
            result = (result*base);
        }
        base = (base*base);
        exponent = exponent>>1;
    }
    cout<<result;
    
}


int main()
{
    int base = 2;
    int exponent = 10;
    binaryExponentiation(base,exponent);
}
