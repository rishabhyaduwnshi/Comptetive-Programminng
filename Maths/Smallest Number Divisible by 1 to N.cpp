long long getSmallestDivNum(long long n)
    {
        long long result = 1;
        for(long long i=2;i<=n;i++)
        {
            result = (result*i)/__gcd(result,i);
        }
        return result;
    }
