void evaluatePostfix(string postFix)
{
    stack<int> st;
    for(int i=0;i<postFix.length();i++)
    {
        char c =postFix[i];
        
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        st.push(c);
        
        else
        {
            char op1 = st.top();
            st.pop();
            
            char op2 = st.top();
            st.pop();
            
            //char result = op1 c op2
            //st.push(result)
        }
        
    }
    cout<< st.top();
             
}
