bool compare(char a, char b)
{
    if(( a=='(' && b==')' )||( a=='[' && b==']' )||( a=='{' && b=='}' ))
        return true;
    else
        return false;
}

bool valid(string str)
{
    stack<char> st;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            st.push(str[i]);
        else
            {
                if(st.empty() == true)
                    return false;
                if(compare(st.top(),str[i]) == false)
                    return false;
                else
                    st.pop();
            }
        
    }
    return (st.empty()==true); 
}
