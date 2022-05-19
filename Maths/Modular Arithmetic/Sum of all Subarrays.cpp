long long subarraySum(long long a[], long long n)
    {
        long long result = 0;
        for(int i=0; i<n; i++)
        {
            result = (result + (a[i] * (i+1) * (n-i))) % 1000000007;
        }
        
        return result%1000000007;
    }
