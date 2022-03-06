//bruteforce approach
long long getMaxArea(long long array[], int n)
    {
        long long result = 0;
        for(int i=0;i<n;i++)
        {
            long long currentArea = array[i];
            for(int j=i-1;j>=0;j--)
            {
                if(array[j]>=array[i])
                    currentArea = currentArea+array[i];
                else 
                    break;
            }
        
            for(int k=i+1;k<n;k++)
            {
                if(array[k]>=array[i])
                    currentArea = currentArea+array[i];
                else
                    break;
            }
        
            result = max(result,currentArea);
        }
        return result;
    }
