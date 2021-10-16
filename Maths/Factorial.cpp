#include<bits/stdc++.h>
using namespace std;




int main()
{
    int t; //For no of testcases
    cin>>t;
    while(t--)
    {int n;
    cin>>n;
    
    vector<int> vc;
    vc.push_back(1);
    
    for(int x=2;x<=n;x++)
    {
        int carry = 0;
        
        for(int i=0;i<vc.size();i++)
        {
            int value = vc[i]*x+carry;
            vc[i] = value%10;
            carry = value/10;
        }
        
        while(carry != 0)
        {
            vc.push_back(carry%10);
            carry = carry/10;
        }
    }
    reverse(vc.begin(),vc.end());
    for(int i=0;i<vc.size();i++)
    cout<<vc[i];
    cout<<"\n";
        
    }
}
