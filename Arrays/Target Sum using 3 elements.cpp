bool findTriplets(int array[], int n)
{
    sort(array,array+n);
    for(int i=0;i<n-1;i++)
    {
        int left = i+1;
        int right = n-1;
        
        while(left < right)
        {
            if(array[i] + array[left] + array[right] == 0)
                return true;
            else if(array[i] + array[left] + array[right] < 0)
                left++;
            else
                right--;
        }
    }
    return false;
}
