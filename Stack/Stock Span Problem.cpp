//bruteforce approach

int calculateSpan(int array[], int n)
{
    vector<int> vc;
    for(int i=n-1;i>=0;i--)
    {
        int stspn = 0;
        int x = array[i];
        
        for(int j=i;j>=0;j--)
        {
            if(array[j] <= x)
                stspn++;
            else
                break;
        }
        
        vc.push_back(stspn);
    }
    
    reverse(vc.begin(),vc.end());
    return vc;
}

//Efficient Approach

vector<int> calculateSpan(int array[], int n)
{
    stack<int> st;
    vector<int> vc;
    st.push(0);
    vc.push_back(1);
    
    for(int i=1;i<n;i++)
    {
        while(st.empty() == false && array[st.top()] <= array[i])
        st.pop();
        int stspn = st.empty() ? i+1 : i-st.top();
        vc.push_back(stspn);
        st.push(i);
    }
    
    for(int i=0;i<vc.size();i++)
        cout<<vc[i]<<" ";
    
    return vc;
}
