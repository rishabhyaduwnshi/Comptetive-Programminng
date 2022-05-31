
/*Given an unsorted array arr of size N, 
rearrange the elements of array such that number at the odd index is greater than the number at the previous even index. 
The task is to complete the function formatArray() which will return formatted array*/


vector<int> formatArray(vector<int> a,int n)
{
     for(int i=0;i<n-1;i++)
    {
        if(i%2==0 && a[i]<a[i+1]) continue;
        
        else if(i%2==1 && a[i]>a[i+1]) continue;
        
        else swap(a[i],a[i+1]);
        
    }
    
    return a;
}
