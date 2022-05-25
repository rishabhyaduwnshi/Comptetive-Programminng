//This will work only if MOD is prime

long long binaryExponentation(long long base, long long exponent, int MOD)
{
    long long result = 1;
    while(exponent != 0)
    {
        if(exponent & 1)
        {
            result = (result*base)%MOD;
        }
        
        base = (base*base)%MOD;
        exponent >>= 1;
    }
    return result;
}

long long findFactorial(long long n, long long MOD)
{
    long long result = 1;
    for(int i=1; i<=n; i++)
        result = (result*i) % MOD;
    return result;
}


int nCrModM(int n, int r, int m) 
{
    long long numerator = findFactorial(n,m);
    long long denominator = (findFactorial(n-r,m)*findFactorial(r,m))%m;
    long long answer = numerator*binaryExponentation(denominator, m-2, m);
    return answer;
}
