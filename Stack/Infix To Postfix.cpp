#include<bits/stdc++.h>
using namespace std;

//power operator's(^) associativity is right to left
//+,-,*,/ are left to right associative

int precedence(char c)
{
    if(c == '-' || c == '+')
        return 1;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '^')
        return 3;
    else
        return -1;
}

void infixToPostfix(string s) {
 
    stack<char> st; //For stack operations, we are using C++ built in stack
    string result;
 
    for(int i = 0; i < s.length(); i++) 
    {
        char c = s[i];
 
        // If the scanned character is an operand, add it to output string
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
 
        // If the scanned character is an ‘(‘, push it to the stack.
        else if(c == '(')
            st.push('(');
 
        // If the scanned character is an ‘)’, pop and to output string from the stack until an ‘(‘ is encountered
        else if(c == ')') 
        {
            while(st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
 
        //If an operator is scanned
        else 
        {
            while(!st.empty() && precedence(s[i]) <= precedence(st.top())) 
            {
                result += st.top();
                st.pop(); 
            }
            st.push(c);
        }
    }
 
    // Pop all the remaining elements from the stack
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }
 
    cout << result << endl;
}


int main()
{
    string expq = "a+b*(c^d)";
    infixToPostfix(expq);
    return 0;
}
