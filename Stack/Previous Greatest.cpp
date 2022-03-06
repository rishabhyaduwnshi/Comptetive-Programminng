void previousGreater(int array[], int n)
{
    stack<int> st;
    st.push(array[0]);
    cout<<-1<<" "; 
    for(int i=1;i<n;i++)
    {
        while(st.empty() ==  false && st.top() <= array[i])
        st.pop();
        
        int previousGreatest = st.empty() ? -1 : st.top();
        cout<<previousGreatest<<" ";
        st.push(array[i]);
    }
    
}
